function [v, p] = alf_vocode(x,p,m)
%ALF_VOCODE apply vocoder to channels and return audio
%
% Usage:    [v,p] = ALF_VOCODE(x,p,m)
%
% Inputs:   x      input signal (column vector)
%           p      map
%           m      vocoder type
%
% Outputs:  v      vocoded signal (column vector)
%           p      map

%      Copyright (C) Alisson Furlani 2020
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
%% vocoder
x(isnan(x)) = 0;
x = abs(x);
% out_len = p.block_shift*length(x) + p.block_size;
out_len = length(x);
v = zeros(1,out_len);
if any(m=='s')
    % Sine Vocoder
    carriers = cos(p.centerFrequencies.*repmat(2*pi*(0:(out_len-1))/p.SamplingFrequency,p.NumberOfBands,1));
    v = sum(carriers.*x);
%     for i=1:length(x)
%         idx_i = (i-1)*p.block_shift+1;
%         idx = idx_i:(idx_i+p.block_size-1);
%         v(idx) = v(idx) + sum(x(:,i).*(carriers(:,idx)).*p.window);
%     end
elseif any(m=='n')
    % White Gaussian Noise Vocoder
    s = rng;
    rng('default');
    noise = wgn(out_len,1,0);
    carriers = CIFilterBank(p.SamplingFrequency, p.centerFrequencies, [], noise);
    varN = var(carriers,0,2);
    carriers = carriers./sqrt(varN);
%     for i=1:length(x)
%         idx_i = (i-1)*p.block_shift+1;
%         idx = idx_i:(idx_i+p.block_size-1);
%         v(idx) = v(idx) + sum(x(:,i).*carriers(:,idx).*p.window');
%     end
    rng(s);
else %default
    % CI Vocoder
    rms_y = 1;%sqrt(mean(abs(xpe_noisy).^2,1));
    x = repelem(x,1,p.block_shift);
    v = CI_Vocoder_Cochlear_envInput(x,p.SamplingFrequency,'CI',rms_y)'; %CI symulator from Braker 2009
end

end
