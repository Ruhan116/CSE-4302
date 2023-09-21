#pragma once
#include <iostream>
using namespace std;
class CurrencyEuro
{
private:
	int euros;
	int cents;
public:
	CurrencyEuro() : euros(0), cents(0) {}
	CurrencyEuro(double val) : euros(static_cast<int>(val)), cents((val - static_cast<int>(val))*100) {}
	void display() {
		cout << "Euros: " << euros << "\nCents: " << cents << endl;
	}
};

