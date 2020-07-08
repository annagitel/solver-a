#include "solver.hpp"
#include "doctest.h"
#include <complex>
#include <string>

using solver::solve, solver::RealVariable, solver::ComplexVariable;
using namespace complexExtend;
using namespace std;
using std::complex;
#define i 1i
TEST_CASE("Checking simple arithmetic operation of RealVariable")
{
	RealVariable x;
	CHECK(solve(5*x==3*x)==0);
	CHECK(solve(x*3==6)==2);
	CHECK(solve(x+3==2)==-1);
	CHECK(solve(x-3==0)==3);
	CHECK(solve(x/3==2)==6);
	CHECK((solve((x^2)==9)==3 || solve((x^2)==9)==-3));
	CHECK(solve((x*3)/3==1)==1);
	CHECK(solve(x*3+3==6+3)==2);
	CHECK(solve(x-3==-1*x+5)==4);
	CHECK(solve(x-3==-x+5)==4);
	CHECK(solve(x==0)==0);
	CHECK(solve(x==1)==1);
	CHECK(solve(x==-2)==-2);
	CHECK(solve(5*x==3*x)==0);
	CHECK(solve(x*3==6)==2);
	CHECK(solve(x+3==2)==-1);
	CHECK(solve(x-3==0)==3);
	CHECK(solve(x/3==2)==6);
	CHECK((solve((x^2)==9)==3 || solve((x^2)==9)==-3));
	CHECK(solve((x*3)/3==1)==1);
	CHECK(solve(x*3+3==6+3)==2);
	CHECK(solve(x-3==-1*x+5)==4);
	CHECK(solve(x-3==-x+5)==4);
	CHECK(solve(x==0)==0);
	CHECK(solve(x==1)==1);
	CHECK(solve(x==-2)==-2);
}
TEST_CASE("Checking simple arithmetic operation of ComplexVariable")
{
	ComplexVariable x;
	CHECK(solve(x*3==4*x)==complex<double>(0,0));
	CHECK(solve(x*3==6+3i)==complex<double>(2,1));
	CHECK(solve(x+3==2i)==complex<double>(-3,2));
	CHECK(solve(x-3==-3i)==complex<double>(3,-3));
	CHECK(solve(x/3==2i)==complex<double>(0,6));
	CHECK((solve((x^2)==9)==complex<double>(3,0) || solve((x^2)==9)==complex<double>(-3,0)));
	CHECK(solve((x*3)/3+4i==1)==complex<double>(1,-4));
	CHECK(solve(x*3+3==6i+3)==complex<double>(0,18));
	CHECK(solve(x-3+i==-1*x+5)==complex<double>(4,-1));

}

TEST_CASE("Complex solution in real variable - should throw ERR")
{
	RealVariable x;
	CHECK_THROWS(solve(4*(x^2)-4*x+4==0));
	CHECK_THROWS(solve(2*(x^2)-2*x+4==0));
	CHECK_THROWS(solve(4*(x^2)+4*x+2==0));
	CHECK_THROWS(solve(4*(x^2)-6*x+5==0));
	CHECK_THROWS(solve((x^2)+4==0));
	CHECK_THROWS(solve(4*(x^2)==-36));
	CHECK_THROWS(solve(3*(x^2)==-99));
	CHECK_THROWS(solve((x^2)+64==0));
	CHECK_THROWS(solve((x^3)==0));
	CHECK_THROWS(solve((x^4)==0));
	CHECK_THROWS(solve((x^5)==0));
}
TEST_CASE("Ordering check of long equation - RealVariable")
{
	RealVariable x;
	CHECK(solve(3*(x^2)-10*x/2+4==2*(x^2)+3*x-12)==4);
	CHECK(solve(3*(x^2)-10*x/2==-4+2*(x^2)+3*x-12)==4);
	CHECK(solve(3*(x^2)==+10*x/2-4+2*(x^2)+3*x-12)==4);
	CHECK(solve(0==3*(x^2)+10*x/2-4+2*(x^2)+3*x-12)==4);
	CHECK(solve(3*(x^2)-10*x/2+4-2*(x^2)==3*x-12)==4);
	CHECK(solve(3*(x^2)-10*x/2+4-2*(x^2)-3*x==-12)==4);
	CHECK(solve(3*(x^2)-10*x/2+4-2*(x^2)-3*x+12==0)==4);
}

TEST_CASE("Should throw no solution in both variables")
{
	RealVariable x;
	ComplexVariable y;
	CHECK_THROWS(solve(x+3==x-2));
	CHECK_THROWS(solve(y+3==y-2));
	CHECK_THROWS(solve(3*x+3==3*x-4));
	CHECK_THROWS(solve(3*y+3==3*y-4));
	CHECK_THROWS(solve(x+3==x-2));
	CHECK_THROWS(solve(y+3==y-2));
	CHECK_THROWS(solve(3*x+3==3*x-4));
	CHECK_THROWS(solve(3*y+3==3*y-4));
}

TEST_CASE("Should throw infinty solutions in both variables")
{
	RealVariable x;
	ComplexVariable y;
	CHECK_THROWS(solve(x+3==x+3));
	CHECK_THROWS(solve(y+3==y+3));
	CHECK_THROWS(solve(3*x+3==3*x+3));
	CHECK_THROWS(solve(3*y+3==3*y+3));
	CHECK_THROWS(solve((x^2)+3==(x^2)+3));
	CHECK_THROWS(solve((y^2)+3==(y^2)+3));
	CHECK_THROWS(solve(x+3==x+3));
	CHECK_THROWS(solve(y+3==y+3));
	CHECK_THROWS(solve(3*x+3==3*x+3));
	CHECK_THROWS(solve(3*y+3==3*y+3));
	CHECK_THROWS(solve((x^2)+3==(x^2)+3));
	CHECK_THROWS(solve((y^2)+3==(y^2)+3));
	CHECK_THROWS(solve(x+3==x+3));
	CHECK_THROWS(solve(y+3==y+3));
	CHECK_THROWS(solve(3*x+3==3*x+3));
	CHECK_THROWS(solve(3*y+3==3*y+3));
	CHECK_THROWS(solve((x^2)+3==(x^2)+3));
	CHECK_THROWS(solve((y^2)+3==(y^2)+3));

}
