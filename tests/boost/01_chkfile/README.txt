---------------------------
0. This test code was taken from:
https://subscription.packtpub.com/book/application_development/9781783551217/1/ch01lvl1sec10/getting-started-with-boost-libraries

It checks for the existence of the given fileName

---------------------------
1. Set environment:
module swap sandybridge broadwell
module swap gcc gcc/X.X.X     OR      module swap gcc intel/Y.Y.Y
load boost/1.73.0    OR   any other version to test

---------------------------
2. Generate the executable:
vi Makefile to set the compiler: CC=g++    OR     CC=icc 
make clean
make

---------------------------
3. Execute it giving any file name as first argument:
./chkfile README.txt
./chkfile README.other

