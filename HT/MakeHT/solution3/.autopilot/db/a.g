#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/HT/MakeHT/solution3/.autopilot/db/a.g.bc ${1+"$@"}
