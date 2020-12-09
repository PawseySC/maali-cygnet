#include <iostream>
#include <boost/any.hpp>

int main(int argc, char *argv[])
{
   boost::any a(5);
   a=7.67;
   std::cout << "After casting a = " << boost::any_cast<double>(a) << std::endl;

   return 0;
}
