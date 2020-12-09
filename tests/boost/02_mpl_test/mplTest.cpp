#include "boost/mpl/pop_back.hpp"
#include "boost/mpl/copy_if.hpp"
#include "boost/mpl/vector.hpp"
#include "boost/mpl/eval_if.hpp"
#include "boost/mpl/empty.hpp"

template <class T>
struct LastEnrollerHelper
{
   static void enroll(int, T*) {}
};

template< class T, class TVector>
struct EnrollerHelper
{
   static void enroll(int iReg, T* iT)
   {
      typedef typename boost::mpl::eval_if<boost::mpl::empty<TVector>,
                       boost::mpl::identity<LastEnrollerHelper<T> >,
                       boost::mpl::identity<EnrollerHelper<T, typename boost::mpl::pop_back< TVector >::type > > >::type NextEnroller;
      NextEnroller::enroll(iReg,iT);
   }
};

void func(){EnrollerHelper<int,boost::mpl::vector<int> >::enroll(1,0);}
