function [ y, yfs ] = preprocess3 (s, fs, vad)
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

if ~iscolumn(vad)
    vad=vad';
end

a=vad.*smpl;
smpl_vad = a(a ~= 0);

y=asl_adjust_wrapper(smpl_vad,yfs,-26);
end

