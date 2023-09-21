#pragma once
#include <iostream>
using namespace std;
class CurrencyDollar
{
private:
	int dollars;
	int cents;
public:
	CurrencyDollar():dollars(0), cents(0) {}
	CurrencyDollar(double val) : dollars(static_cast<int>(val)), cents((val - static_cast<int>(val))*100) {}
	void display() {
		cout << "Dollars: " << dollars << "\nCents: " << cents << endl;
	}
};

