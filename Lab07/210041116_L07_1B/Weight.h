#pragma once
#include <iostream>
using namespace std;

class Weight{
private:
    double kgToPound = 2.20462;
    int pound;
    double ounce;

public:
    Weight() : pound(0), ounce(0.0) {}

    Weight(double kg);

    Weight(int pound, double ounce) : pound(pound), ounce(ounce) {}

    void showWeight();

    operator double();
};

