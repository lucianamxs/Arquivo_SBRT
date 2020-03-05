function [y,x,v] = s_and_n_ASL_new(S, N, SNRdb,fs) 
%S: voz limpa (SPEECH)
%N: Sinal de ruido (NOISE)
%SNRs
%fs: frequência de amostragem (sampling rate)
%entre com o sinal de fala(x) e ruido(v)
%Aqui será primeiro misturado os sinais resultando no sinal contaminado...
%normalizado

P_S=norm(S,2)^2;    %sum(pwelch(S)); % signal power
P_N=norm(N,2)^2;   %sum(pwelch(N1)); % noise power

SNR_in=P_S/P_N; %SNR of the input signals
SNR=10^(SNRdb/10);

a=sqrt(SNR_in/SNR); % parameter to adjust SNR to wanted value
N=a*N;

S_mix=S+N; %sinal contaminado

y = asl_adjust(S_mix/max(abs(S_mix)), fs, -26); %falta a função asl_adjust
aa = y./S_mix; %recebe o sinal contaminado e dividi pela estimativa de sinal contaminado
norm_factor = mean(aa(~isnan(aa))); %normalizacao %isnan-Determinar quais elementos da matriz são NaN
        
x = S*norm_factor; %multiplica a fala pelo fator de normalizacao
v = N*norm_factor;

end

