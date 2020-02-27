function [y,x,v] = s_and_n_ASL(y1,v,x,SNRdb,fs) 

y = asl_adjust(y1/max(abs(y1)), fs, -26); %falta a função asl_adjust
a = y./y1; %recebe o sinal contaminado e dividi pela estimativa de sinal contaminado
norm_factor = mean(a(~isnan(a))); %normalizacao %isnan-Determinar quais elementos da matriz são NaN
        
x = x*norm_factor; %multiplica a fala pelo fator de normalizacao
v = v*norm_factor; %multiplica o ruido pelo fator de normalizacao
        
end