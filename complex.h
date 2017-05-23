#include <iostream>


class Complex
{
private:
	double _re, _im;
	
public:
	Complex();
	Complex(double realPart, double imaginaryPart);
	//преобразующий
	Complex(double real);
	~Complex();

	double realPart();
	double imaginaryPart();

	Complex operator-() const;

	Complex operator+(Complex other) const;
	Complex operator-(Complex other) const;
	Complex operator*(Complex other) const;
	Complex operator/(Complex other) const;

	Complex operator+=(Complex other);
	Complex operator-=(Complex other);

	bool operator==(Complex other) const;
	bool operator!=(Complex other) const;

	friend std::ostream& operator<<(std::ostream& out, const Complex c);
};