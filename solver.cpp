#include <complex>
#include "solver.hpp"
#include <math.h>
using std::complex;
namespace solver {
	const RealVariable operator+(const RealVariable &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator+(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator+(const double &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator-(const RealVariable &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator-(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator-(const double &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator-(const RealVariable &c1) { return RealVariable(); }

	const RealVariable operator*(const RealVariable &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator*(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator*(const double &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator/(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator^(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator==(const RealVariable &c1, const RealVariable &c2) { return RealVariable(); }

	const RealVariable operator==(const RealVariable &c1, const double &c2) { return RealVariable(); }

	const RealVariable operator==(const double &c1, const RealVariable &c2) { return RealVariable(); }

	ostream &operator<<(ostream &os, const RealVariable &c) { return (os << c._re); }

	const ComplexVariable operator+(const ComplexVariable &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator+(const ComplexVariable &c1, const complex<double> &c2) { return ComplexVariable(); }

	const ComplexVariable operator+(const complex<double> &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator+(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator+(const double &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const ComplexVariable &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const ComplexVariable &c1, const complex<double> &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const complex<double> &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const double &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator-(const ComplexVariable &c1) { return ComplexVariable(); }

	const ComplexVariable operator*(const ComplexVariable &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator*(const ComplexVariable &c1, const complex<double> &c2) { return ComplexVariable(); }

	const ComplexVariable operator*(const complex<double> &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator*(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator*(const double &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator/(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator/(const double &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator^(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator==(const ComplexVariable &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator==(const ComplexVariable &c1, const complex<double> &c2) { return ComplexVariable(); }

	const ComplexVariable operator==(const complex<double> &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	const ComplexVariable operator==(const ComplexVariable &c1, const double &c2) { return ComplexVariable(); }

	const ComplexVariable operator==(const double &c1, const ComplexVariable &c2) { return ComplexVariable(); }

	ostream &operator<<(ostream &os, const ComplexVariable &c) {
		return (os << c._MyComplex.real() << '+' << c._MyComplex.imag() << 'i');
	}

	double solve(RealVariable equation) {
		double ans;
		return ans;
	}

	std::complex<double> solve(ComplexVariable equation) {
		std::complex<double> ans;
		return ans;
	}
}

namespace complexExtend {
	const complex<double> operator+(double r,const complex<double>& c2){
		return complex<double>(r+c2.real(),c2.imag());
	}

	const complex<double> operator+(const complex<double>&c1,double r){
		return complex<double>(r+c1.real(),c1.imag());
	}

	const complex<double> operator-(double r,const complex<double>& c2){
		return complex<double>(r-c2.real(),-c2.imag());
	}
	const complex<double> operator-(const complex<double>&c1,double r){
		return complex<double>(c1.real()-r,c1.imag());
	}

	const complex<double> operator*(double r,const complex<double>& c2){
		return complex<double>(r*c2.real(),r*c2.imag());
	}

	const complex<double> operator*(const complex<double>&c1,double r){
		return complex<double>(c1.real()*r,c1.imag()*r);
	}

	const complex<double> operator/(const complex<double>&c1,double r){
		return complex<double>(c1.real()/r,c1.imag()/r);
	}
}