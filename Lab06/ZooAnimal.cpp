#include "ZooAnimal.h"

ZooAnimal::ZooAnimal(): nameOfAnimal(""), birthYear(2023), cageNumber(0), weightData(1.0), height(1)
{
}

ZooAnimal::ZooAnimal(const ZooAnimal &animal) {
    nameOfAnimal = animal.nameOfAnimal;
    birthYear = animal.birthYear;
    cageNumber = animal.cageNumber;
    weightData = animal.weightData;
    height = animal.height;
}


bool ZooAnimal::operator>(const ZooAnimal& animal) const
{
    return weightData > animal.weightData;
}

bool ZooAnimal::operator>=(const ZooAnimal& animal) const
{
    return weightData >= animal.weightData;
}

bool ZooAnimal::operator<(const ZooAnimal& animal) const
{
    return weightData < animal.weightData;
}

bool ZooAnimal::operator<=(const ZooAnimal& animal) const
{
    return weightData <= animal.weightData;
}

bool ZooAnimal::operator==(const ZooAnimal& animal) const
{
    return weightData == animal.weightData;
}

void ZooAnimal::operator+=(double weight)
{
    weightData += weight;
}

void ZooAnimal::operator-=(double weight)
{
    weightData -= weight;
}

