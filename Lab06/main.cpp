#include <iostream>
#include "Counter.h"
#include "Matrix3d.h"
#include "rationalNumber.h" 
#include "ZooAnimal.h"

using namespace std;

int main() {
	cout << "__________TASK 1__________" << endl;
	Counter c1, c2(5), c3(6);
	c1 = c2 + c3;
	cout << c1.getCount() << endl;
	c1 += c2;
	cout << c1.getCount() << endl;
	c1 += c2++;
	cout << c1.getCount() << endl;
	c1 += ++c2;
	cout << c1.getCount() << endl;
	c1 += 16;
	cout << c1.getCount() << endl;

	cout << "__________TASK 2__________" << endl;
	int a[3][3] = {{1, 0, 0}, { 0, 2, 0 }, { 0, 0, 3 }};
	Matrix3d m1, m2(a), m3(a);
	m1 = m2 + m3;
	m1.printMatrix();
	cout << endl;
	m1 = m2 - m3;
	m1.printMatrix();
	cout << endl;
	m1 = m2 * m3;
	m1.printMatrix();
	cout << endl;
	cout << m1.det();
	cout << endl;

	m1 = m1.inverse();
	m1.printMatrix();

	cout << "__________TASK 3__________" << endl;
	rationalNumber x, y(2, 3), z(3, 4);
	x = y + z;
	x.display();
	x = y - z;
	x.display();
	x = y * z;
	x.display();
	x = y / z;
	x.display();
	cout << "__________TASK 4__________" << endl;
	ZooAnimal gorilla("King Kong", 2002, 110, 104, 175);
	gorilla -= 16.0;
	gorilla.displayInfo();

	return 0;
}