% Experimento envfilter para fala e ruido ICRA (Usado para tese)
clearvars; close all; clc 

addpath('C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT');
addpath('C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT\Funcoes_auxiliares')
addpath('C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT\SRMRToolbox-master')
addpath('C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT\Databases')

%%parallel computing settings
% p = gcp('nocreate'); % If no pool, do not create new one.
% if isempty(p)
%     p = parpool(2); % se nao ha pool, cria um com 2 workers
% %     else
% %         delete(p);
% %         clear p;
% %         p = parpool(2);
% end
clc;

%%globals
%global Lg gamma Lm mu msk

tic;    %starts counting time

%% select noise file

noise_file = fullfile('C','Users','Lu_Xa','Desktop','SBRT_repositorio','Arquivo_SBRT','Databases','Noise_Recordings');% Abro o arquivo de ruido
[v0,fs1] = audioread('4talker-babble_ISTS.wav'); % Leio o arquivo de ruido, obtenho os dados e a freq de amostragem

%[v0,fs1] = audioread('C:\Users\Lu_Xa\Desktop\Lu2\Databases\Noise_Recordings\4talker-babble_ISTS.wav'); % Leio o arquivo de ruido, obtenho os dados e a freq de amostragem
fs=16e3; %frequencia de amostragem que gostaria de ter
if fs1 ~= fs %se a frequência de amostragem obtida pelo ruido for aprox. da frequencia q quero   
    v0 = resample(v0(:,1),fs,fs1); % remonto a matriz= remodelo (v0, tam fs, tam fs1)
else
    v0 = v0(:,1);
end
Lv = length(v0); %tamanho do ruido

%% Input the number of files to be analysed
%file_num = 720; %são 720 arquivos de voz disponíveis

%% alocate memory and simulations settings

Ljt = 10; %72; %Acho que porque cada arquivo de audio tem 10 parte e são 72 partes
Lit = 1; %10; 
file_num = Lit*Ljt;
%nch = 22; %numero de canais do filtro

%msenv_MMSE = zeros(nch,file_num);%MEU
%mse_MMSE = zeros(nch,file_num);%MEU
srmr_noisy = zeros(1,file_num); %Crio matriz para a alocação do ruido,voz e afins-analise SRMR
srmr_clean = zeros(1,file_num);
srmr_MMSE = zeros(1,file_num);%MEU
srmr_MMSE_new = zeros(1,file_num);%MEU


tic

for SNRdb = [-20, -15 , -10, -5, 0, 10, 20];% Escolho as SNRs em dB para serem analisadas
    
     parfor ii=1:file_num;
        %for ii=1:file_num;
        j = floor((ii-1)/Lit)+1; %arredonda cada elemento (...) para o número inteiro mais próximo menor ou igual a esse elemento.
        i = mod((ii-1),Lit)+1; %restante apos a divisao
        
        %cd ('C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT\')
        speech_file = sprintf(...
         '/Users/Lu_Xa/Desktop/SBRT_repositorio/Arquivo_SBRT/Databases/Speech/IEEE_corpus/wideband/S_%02d_%02d.wav',j,i); %abro o arquivo com os audios
        
        [x,fs1] = audioread(speech_file); %leio os arquivos de audio
        %sound(x,fs1)
        
        %% vad e resample
        %arquivo de texto sil/v/uv
        phnfile = strcat(speech_file(1:end-3),'phn');%concateno os sinais de voz horizontalmente
        
        fid = fopen(phnfile);%obtenho informações sobre os arquivos abertos
        C = textscan(fid, '%d %d %s');% lê dados de um arquivo de texto. O arquivo de texto é indicado pelo identificador do arquivo fileID
        fclose(fid);%Feche um ou todos os arquivos abertos
        
        idx=find(strncmp('sil',C{3},3));%Encontre valores de elementos diferentes de zero (Compare os primeiros N caracteres das strings)
        vadall=ones(size(x));
        for jj=1:length(idx)
            i1=C{1}(idx(jj));
            i2=C{2}(idx(jj));
            vadall(i1:i2)=0;
        end
        
        if fs1 ~= fs
            x = resample(x,fs,fs1);
            vadall = abs(resample(vadall,fs,fs1));
            vadall(vadall~=0) = 1;
        end
        x = x/var(x); %OBTENHO O SINAL DE VOZ
        Ls = length(x); %obtenho o tamanho do sinal de voz
        
        %% noise
        nv=floor(Ls/Lv); %tamanho da fala dividido pelo tamanho do ruido
        
        if nv>0
            rest=mod(Ls,Lv); %resto da divisao
            v=[repmat(v0,nv,1); 
            v0(1:rest)];
            v=v/sqrt(var(v));     %normaliza o a variavel de ruido
        else
            dif = Lv-Ls; %se nao faco a diferenca do ruido menos fala
            i0 = floor(rand(1)*dif)+1;
            v = v0(i0:i0+Ls-1);
            v=v/sqrt(var(v));     %normaliza o a variavel de ruido
        end
        
        %% mixed - AQUI MISTURA-SE O SINAL DE FALA COM O RUIDO
        [yf,xf,vf] = s_and_n_ASL_new(x, v, SNRdb, fs); %retorna os sinais contaminado, fala e ruido
        
        X_estimado = mmse1(yf,xf,vf,fs); %Fala estimada pelo MMSE
        %sound(yf,fs)
        %sound(X_estimado,fs)
        
          if length(X_estimado) < length(yf)
           
            diferenca = abs(length(X_estimado) - length(yf));
            estimado = zeros(1,diferenca)';
            X_estimado_new = [X_estimado; estimado]; %aumenta o tamanho do sinal, pois a uma diferenaça proveniente da retirada de frames da técnica mmse1
          end
         %sound(X_estimado_new, fs)
         
        %% calcula SRMR-CI
       
        srmr_MMSE(ii) = SRMR_CI_vad(X_estimado_new, vadall, fs,'norm',1); % sinal contaminado processado pelo MMSE
        srmr_noisy(ii)= SRMR_CI_vad(yf, vadall, fs,'norm',1); % sinal contaminado = fala + ruido
        srmr_clean(ii) = SRMR_CI_vad(xf, vadall, fs,'norm',1); % sinal = fala
        
     end
    %% Salva arquivos
     %path = fullfile('C','Users','Lu_Xa','Desktop','SBRT_repositorio','Arquivo_SBRT','Results');% Abro o arquivo de ruido
     path = 'C:\Users\Lu_Xa\Desktop\SBRT_repositorio\Arquivo_SBRT\Results\';
     ck = clock;
     file = sprintf('Dez_SNR%+ddB.mat',SNRdb);
     filepath = strcat(path,file);
     save(filepath, 'srmr_MMSE','srmr_noisy', 'srmr_clean' )
    %save(filepath,'X_estimado_new', 'srmr_noisy','srmr_clean', 'srmr_MMSE', '-v7.3')
    
end

toc