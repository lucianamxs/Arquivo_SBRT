function [ y, yfs ] = preprocess2 (s, fs)
%PREPROCESS2 preprocess with VAD from the VOICEBOX toolbox
% read the .wav file if needed
if ischar(s)
    [smpl,yfs]=wavread(s);
else
    smpl = s;
    yfs = fs;
end

if ~iscolumn(smpl)
    smpl = smpl';
end

%% modified vad function from voicebox toolbox (R. Chiea)
y1 = vadsohn(smpl, yfs);
a=y1.*smpl;
smpl_vad = a(a ~= 0);

y=asl_adjust_wrapper(smpl_vad,yfs,-26);
end

