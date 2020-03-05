MATLAB="/usr/local/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/rafael/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for vad_s" > vad_s_mex.mki
echo "CC=$CC" >> vad_s_mex.mki
echo "CFLAGS=$CFLAGS" >> vad_s_mex.mki
echo "CLIBS=$CLIBS" >> vad_s_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> vad_s_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> vad_s_mex.mki
echo "CXX=$CXX" >> vad_s_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> vad_s_mex.mki
echo "CXXLIBS=$CXXLIBS" >> vad_s_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> vad_s_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> vad_s_mex.mki
echo "LD=$LD" >> vad_s_mex.mki
echo "LDFLAGS=$LDFLAGS" >> vad_s_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> vad_s_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> vad_s_mex.mki
echo "Arch=$Arch" >> vad_s_mex.mki
echo OMPFLAGS= >> vad_s_mex.mki
echo OMPLINKFLAGS= >> vad_s_mex.mki
echo "EMC_COMPILER=" >> vad_s_mex.mki
echo "EMC_CONFIG=optim" >> vad_s_mex.mki
"/usr/local/MATLAB/R2013a/bin/glnxa64/gmake" -B -f vad_s_mex.mk
