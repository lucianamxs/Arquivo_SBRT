MATLAB="/usr/local/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/rafael/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for asl_adjust" > asl_adjust_mex.mki
echo "CC=$CC" >> asl_adjust_mex.mki
echo "CFLAGS=$CFLAGS" >> asl_adjust_mex.mki
echo "CLIBS=$CLIBS" >> asl_adjust_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> asl_adjust_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> asl_adjust_mex.mki
echo "CXX=$CXX" >> asl_adjust_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> asl_adjust_mex.mki
echo "CXXLIBS=$CXXLIBS" >> asl_adjust_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> asl_adjust_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> asl_adjust_mex.mki
echo "LD=$LD" >> asl_adjust_mex.mki
echo "LDFLAGS=$LDFLAGS" >> asl_adjust_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> asl_adjust_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> asl_adjust_mex.mki
echo "Arch=$Arch" >> asl_adjust_mex.mki
echo OMPFLAGS= >> asl_adjust_mex.mki
echo OMPLINKFLAGS= >> asl_adjust_mex.mki
echo "EMC_COMPILER=" >> asl_adjust_mex.mki
echo "EMC_CONFIG=optim" >> asl_adjust_mex.mki
"/usr/local/MATLAB/R2013a/bin/glnxa64/gmake" -B -f asl_adjust_mex.mk
