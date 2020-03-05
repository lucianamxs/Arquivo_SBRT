% Before using this test script, set up the path and compile the MEX extensions
% as instructed in the README file.

% First possible syntax: pass filename as argument, without sampling rate
file = 'test.wav';
[ratio, energy] = SRMR_CI(file);

% Second possible syntax: pass vector and sampling rate as argument
[s, fs] = wavread('test.wav');
[ratio, energy] = SRMR_CI(s, fs);

% SRMRnorm optionally supports controlling the bandwidth of the
% modulation filterbank third and fourth arguments are the center
% frequencies of the first and last filters.
[ratio_norm, energy_norm] = SRMR_CI(s, fs, 'norm', 1);

display([ratio ratio_norm])
