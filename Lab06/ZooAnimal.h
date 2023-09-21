#pragma once
#include <iostream>
#include <string>
using namespace std;

class ZooAnimal
{
private:
	string nameOfAnimal;
	int birthYear;
	int cageNumber;
	double weightData;
	int height;
public:
	ZooAnimal();
	ZooAnimal(const ZooAnimal& animal);
	ZooAnimal(
		string animal_name,
		int birth_year,
		int cage_number,
		float weight,
		int height
	) {
		nameOfAnimal = animal_name;
		birthYear = birth_year;
		cageNumber = cage_number;
		weightData = weight;
		this->height = height;
	}
	void displayInfo() {
		cout << "Animal Name: " << nameOfAnimal << endl;
		cout << "Animal Birth Year: " << birthYear << endl;
		cout << "Animal Cage Number: " << cageNumber << endl;
		cout << "Animal Weight: " << weightData << endl;
		cout << "Animal Heigth: " << height << endl;
	}
	bool operator>(const ZooAnimal& animal) const;
	bool operator>=(const ZooAnimal& animal) const;
	bool operator<(const ZooAnimal& animal) const;
	bool operator<=(const ZooAnimal& animal) const;
	bool operator==(const ZooAnimal& animal) const;
	void operator+=(double n);
	void operator-=(double n);
};

