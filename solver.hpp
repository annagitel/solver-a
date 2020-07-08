#pragma once
#include <complex>
using namespace std;
using std::complex;

namespace solver
{
	class RealVariable{
	public:
		double _re;
		friend const RealVariable operator+ (const RealVariable& c1, const RealVariable& c2);
		friend const RealVariable operator+ (const RealVariable& c1, const double& c2);
		friend const RealVariable operator+ (const double& c1, const RealVariable& c2);
		friend const RealVariable operator- (const RealVariable& c1, const RealVariable& c2);
		friend const RealVariable operator- (const RealVariable& c1, const double& c2);
		friend const RealVariable operator- (const double& c1, const RealVariable& c2);
		friend const RealVariable operator- (const RealVariable& c1);
		friend const RealVariable operator* (const RealVariable& c1, const RealVariable& c2);
		friend const RealVariable operator* (const RealVariable& c1, const double& c2);
		friend const RealVariable operator* (const double& c1, const RealVariable& c2);
		friend const RealVariable operator/ (const RealVariable& c1, const double& c2);
		friend const RealVariable operator^(const RealVariable& c1, const double& c2);
		friend const RealVariable operator==(const RealVariable& c1, const RealVariable& c2);
		friend const RealVariable operator==(const RealVariable& c1, const double& c2);
		friend const RealVariable operator==(const double& c1, const RealVariable& c2);
		friend ostream& operator<< (ostream& os, const RealVariable& c);

	};

	class ComplexVariable
	{
	public:
		std::complex<double> _MyComplex;

		const double real(){return _MyComplex.real();}
		const double imag(){return _MyComplex.imag();}

		friend const ComplexVariable operator+ (const ComplexVariable& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator+ (const ComplexVariable& c1, const complex<double>& c2);
		friend const ComplexVariable operator+ (const complex<double>& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator+ (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator+ (const double& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator- (const ComplexVariable& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator- (const ComplexVariable& c1, const complex<double>& c2);
		friend const ComplexVariable operator- (const complex<double>& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator- (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator- (const double& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator- (const ComplexVariable& c1);
		friend const ComplexVariable operator* (const ComplexVariable& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator* (const ComplexVariable& c1, const complex<double>& c2);
		friend const ComplexVariable operator* (const complex<double>& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator* (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator* (const double& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator/ (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator/ (const double& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator^ (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator== (const ComplexVariable& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator== (const ComplexVariable& c1, const complex<double>& c2);
		friend const ComplexVariable operator== (const complex<double>& c1, const ComplexVariable& c2);
		friend const ComplexVariable operator== (const ComplexVariable& c1, const double& c2);
		friend const ComplexVariable operator== (const double& c1, const ComplexVariable& c2);

		friend ostream& operator<< (ostream& os, const ComplexVariable& c);
	};

	double solve(RealVariable equation);

	std::complex<double> solve(ComplexVariable equation);
}

namespace complexExtend{
	const complex<double> operator+(double r,const complex<double>& c2);
	const complex<double> operator+(const complex<double>&c1,double r);
	const complex<double> operator-(double r,const complex<double>& c2);
	const complex<double> operator-(const complex<double>&c1,double r);
	const complex<double> operator*(double r,const complex<double>& c2);
	const complex<double> operator*(const complex<double>&c1,double r);
	const complex<double> operator/(const complex<double>&c1,double r);
}