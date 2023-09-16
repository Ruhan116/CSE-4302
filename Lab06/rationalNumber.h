#pragma once
#include <iostream>
using namespace std;

class rationalNumber
{
private:
	int p, q;

public:
	int gcd(int a, int b);
	void simplify();
	rationalNumber();
	rationalNumber(int p, int q);

	int getNumerator();
	int getDenominator();
	void setNumerator(int p);
	void setDenominator(int q);

	double getDecimal();
	void invert();

	void display() {
		cout << p << "/" << q << endl;
	}

	rationalNumber operator+(rationalNumber const& obj)const;
	rationalNumber operator-(rationalNumber const& obj)const;
	rationalNumber operator*(rationalNumber const& obj)const;
	rationalNumber operator/(rationalNumber num) const;
	bool operator==(const rationalNumber& num) const;
};