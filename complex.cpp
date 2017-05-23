#include "complex.h"
#include "math.h"


Complex::Complex()
{
	_re = 0.0;
	_im = 0.0;
}

Complex::Complex(double real)
{
	_re = real;
	_im = 0;
}

Complex::Complex(double realPart, double imaginaryPart)
{
	_re = realPart;
	_im = imaginaryPart;
}

Complex::~Complex() 
{}

double Complex::realPart()
{
	return _re;
}

double Complex::imaginaryPart()
{
	return _im;
}

Complex Complex::operator-() const
{
	return Complex(-_re, -_im);
}

Complex Complex::operator+(Complex other) const
{
	return Complex(_re + other._re, _im + other._im);
}

Complex Complex::operator-(Complex other) const
{
	return Complex(_re - other._re, _im - other._im);
}

Complex Complex::operator*(Complex other) const
{
	return Complex(_re * other._re - _im * other._im, _re * other._im + _im * other._re);
}

Complex Complex::operator/(Complex other) const
{
	double denom = other._re * other._re + other._im * other._im;

	if (denom != 0)		
		return Complex((_re * other._re + _im * other._im) / denom, (_im * other._re -_re * other._im  ) / denom);
	else
		return Complex(INFINITY, INFINITY);
}

Complex Complex::operator+=(Complex other)
{
	double re = _re + other._re;
	double im = _im + other._im;

	_re = re;
	_im = im;

	return Complex(re, im); 
}

Complex Complex::operator-=(Complex other)
{
	double re = _re - other._re;
	double im = _im - other._im;

	_re = re;
	_im = im;

	return Complex(re, im); 
}

bool Complex::operator==(Complex other) const
{
	return _re == other._re && _im == other._im;
}

bool Complex::operator!=(Complex other) const
{
	return !operator==(other);
}

std::ostream& operator<<(std::ostream& out, const Complex c)
{
	out << c._re;

	if (c._im > 0)
		out << '+';
	
	if (c._im != 0)
		out << c._im << 'i';

	return out;
}