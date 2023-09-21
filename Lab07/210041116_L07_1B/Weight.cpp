#include "Weight.h"
#include <iostream>
using namespace std;

Weight::Weight(double kg)
{
    double totalPounds = kg * kgToPound;
    pound = static_cast<int>(totalPounds);
    ounce = (totalPounds - pound) * 16.0; 
}

void Weight::showWeight()
{
    cout << pound << "-" << ounce << " oz";
}

Weight::operator double()
{
    return static_cast<double>(pound) / kgToPound + (ounce / 16.0) / kgToPound;
}
