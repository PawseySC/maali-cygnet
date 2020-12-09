---------------------------
0. This test code was taken from:
https://tabreziqbal.wordpress.com/2006/03/16/how-to-test-c-boost-installation/

It simply uses boost::any and boost::any_cast

---------------------------
1. Set environment:
module swap sandybridge broadwell
module swap gcc gcc/X.X.X     OR      module swap gcc intel/Y.Y.Y
load boost/1.73.0    OR     any other version to test

---------------------------
2. Generate the executable:
vi Makefile to set the compiler: CC=g++    OR     CC=icc 
make clean
make

---------------------------
3. Execute it
./anycast 
