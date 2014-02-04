MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/Tom/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for julia_v4_2" > julia_v4_2_mex.mki
echo "CC=$CC" >> julia_v4_2_mex.mki
echo "CFLAGS=$CFLAGS" >> julia_v4_2_mex.mki
echo "CLIBS=$CLIBS" >> julia_v4_2_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> julia_v4_2_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> julia_v4_2_mex.mki
echo "CXX=$CXX" >> julia_v4_2_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> julia_v4_2_mex.mki
echo "CXXLIBS=$CXXLIBS" >> julia_v4_2_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> julia_v4_2_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> julia_v4_2_mex.mki
echo "LD=$LD" >> julia_v4_2_mex.mki
echo "LDFLAGS=$LDFLAGS" >> julia_v4_2_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> julia_v4_2_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> julia_v4_2_mex.mki
echo "Arch=$Arch" >> julia_v4_2_mex.mki
echo OMPFLAGS= >> julia_v4_2_mex.mki
echo OMPLINKFLAGS= >> julia_v4_2_mex.mki
echo "EMC_COMPILER=" >> julia_v4_2_mex.mki
echo "EMC_CONFIG=optim" >> julia_v4_2_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f julia_v4_2_mex.mk
