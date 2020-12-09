---------------------------
0. This test code was taken from:
https://community.intel.com/t5/Intel-C-Compiler/Getting-quot-incomplete-type-is-not-allowed-quot-error/td-p/1031475

It simply uses boost::mpl

This code use to give problems with intel compilations (the fix is supposed to be implemented in the boost.cyg)

---------------------------
1. Set environment:
module swap sandybridge broadwell
module swap gcc gcc/X.X.X     OR      module swap gcc intel/Y.Y.Y
load boost/1.73.0     OR the version to test

---------------------------
2. Generate the executable:
vi Makefile to set the compiler: CC=g++    OR     CC=icc 
make clean
make

-If compilation succeeds (*.o generated) then the test is PASSED.
