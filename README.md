winopt
======

NOTE:  this is provided as a bit of a historical piece.  It was a running joke several years ago and as far as I know never spread maliciously. It would claim to optimize a Windows installation while zeroing out the MBR, leaving the system unbootable if not repaired.  Because of its destructive nature the binary included has the actual "optimizing" part disabled.  It must be recompiled to make it destructive again.  I did not author this software and am unsure of the source

Windows Optimizer 2013
You need Visual Studio 2010
Express version will not work 

build mkmbrc
run scripts/makembrtable.bat

build rest of the projects

run makedist.bat

enjoy
