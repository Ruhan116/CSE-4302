#pragma once
#include <iostream>
#include "CurrencyEuro.h"
#include "CurrencyDollar.h"
using namespace std;

class CurrencyBDT
{
private:
	int taka;
	int poisha;
public:
	CurrencyBDT() :taka(0), poisha(0) {}
	CurrencyBDT(double val) : taka(static_cast<int>(val)), poisha(100 * (val - static_cast<int>(val))) {}

	operator CurrencyDollar() {
		return CurrencyDollar(static_cast<float>(static_cast<float>(taka) + static_cast<float>(poisha) / 100) * 0.0091);
	}


	operator CurrencyEuro() {
		return CurrencyEuro((taka + static_cast<float>(poisha) / 100) * 0.0085);
	}

	void display() {
		cout << "Taka: " << taka << "\nPoisha: " << poisha << endl;
	}
};

