clc;
close all;
clearvars;

load('nov_SNR-3dB.mat')
[nch, lenr] = size(rs1);
N = (lenr+1)/2;
L = 100; %tamanho do filtro

g1 = zeros(nch,L);    %filtro p1
g2 = zeros(nch,L);    %filtro p2
gp = zeros(nch,L);  %filtro pausa

tic
for ch = 1:nch;
%% calcula coefs dos filtros
    K=rs1(ch,N)/rv(ch,N);
    g0 = K*[1; .1*randn(L-1,1)]; %randn(L,1);
    options = optimset('Display','iter');%,'MaxFunEvals',1e6,'MaxIter',1e6);
    g1(ch,:) = fminsearch(@(g) Jx(g, rs1(ch,:), rv(ch,:), L), g0, options);
    K=rs2(ch,N)/rv(ch,N);
    g0 = K*[1; .1*randn(L-1,1)]; %randn(L,1);
    g2(ch,:) = fminsearch(@(g) Jx(g, rs2(ch,:), rv(ch,:), L), g0, options);
    K=1;
    g0 = K*[1; .1*randn(L-1,1)]; %randn(L,1);
    gp(ch,:) = fminsearch(@(g) Jx(g, zeros(1,2*N-1), rv(ch,:), L), g0, options);
    
    %plots
    plt = 0; %flag para plotar gráficos
    if plt
        figure(ch)
        stem(g1(ch,:))
        hold on
        stem(g2(ch,:),'k')
        stem(g0(ch,:),'g')
        legend({'g1', 'g2', 'gp'})
    end 
end

SNRdb=lin2db(SNR);
file = sprintf('envFilter/coefs/nov_SNR%+ddB_%d.mat',SNRdb,L);
save(file, 'g1','g2','gp', 'SNR')

toc