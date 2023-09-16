#include "rationalNumber.h"
#include <iostream>
using namespace std;


int rationalNumber::gcd(int a, int b)
{
    if (b == 0)return a;
    return gcd(b, a % b);
}

void rationalNumber::simplify()
{
    int div = gcd(p, q);
    p /= div;
    q /= div;
}

rationalNumber::rationalNumber()
{
    p = 1;
    q = 1;
}

rationalNumber::rationalNumber(int p, int q)
{
    if (q == 0) {
        cout << "Error! Denominator cannot be zero" << endl;
        this->p = 1;
        this->q = 1;
    }
    else {
        this->p = p;
        this->q = q;
    }
}

int rationalNumber::getNumerator()
{
    return p;
}

int rationalNumber::getDenominator()
{
    return q;
}

void rationalNumber::setNumerator(int p)
{
    this->p = p;
}

void rationalNumber::setDenominator(int q)
{
    this->q = q;
}

double rationalNumber::getDecimal()
{
    return p / q;
}

void rationalNumber::invert()
{
    if (p == 0) {
        cout << "Error! Cannot invert. Denominator cannot be zero" << endl;
    }
    else {
        int temp = this->p;
        this->p = this->q;
        this->q = temp;
    }
}

rationalNumber rationalNumber::operator+(rationalNumber const& num) const
{
    rationalNumber temp;
    temp.p = (this->p * num.q) + (this->q * num.p);
    temp.q = this->q * num.q;

    return temp;
}

rationalNumber rationalNumber::operator-(rationalNumber const& num) const
{
    rationalNumber temp;
    temp.p = (this->p * num.q) - (this->q * num.p);
    temp.q = this->q * num.q;
    return temp;
}

rationalNumber rationalNumber::operator*(rationalNumber const& num) const
{
    rationalNumber temp;
    temp.p = this->p * num.p;
    temp.q = this->q * num.q;
    return temp;
}


rationalNumber rationalNumber::operator/(rationalNumber num) const
{
    rationalNumber temp;
    num.invert();
    temp.p = this->p * num.p;
    temp.q = this->q * num.q;
    return temp;
}
