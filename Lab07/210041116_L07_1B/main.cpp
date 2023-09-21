#include <iostream>
#include <string>
#include "Weight.h"
#include "StudentCollection.h"
#include "CurrencyBDT.h"
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"

using namespace std;

int main() {
    cout << "****************TASK 1****************" << endl;
    StudentCollection studentCollection;

    studentCollection.addStudent("Arefeen", 90.5);
    studentCollection.addStudent("Tbr", 85.0);
    studentCollection.addStudent("Hasib", 78.5);

    cout << "Enter name of student: ";
    string s0;
    cin >> s0;
    cout << endl;
    studentCollection[s0];

    cout << "Enter name of student: ";
    string s1;
    cin >> s1;
    cout << endl;
    cout << studentCollection[s1] << endl;

    cout << "****************TASK 2****************" << endl;
    Weight weight1(70.5);
    cout << "Weight 1: ";
    weight1.showWeight();
    cout << " = " << static_cast<double>(weight1) << " KG" << std::endl;
    Weight weight2(150, 8.5);
    cout << "Weight 2: ";
    weight2.showWeight();
    cout << " = " << static_cast<double>(weight2) << " KG" << std::endl;

    cout << "****************TASK 3****************" << endl;
    double taka = 10128.50;
    CurrencyBDT BDT(taka);
    cout << "The amount of money in BDT is: " << endl;
    BDT.display();
    cout << "The amount of money in USD is: " << endl;
    CurrencyDollar USD = BDT;
    USD.display();
    cout << "The amount of money in Euro is: " << endl;
    CurrencyEuro Euro = BDT;
    Euro.display();
    return 0;
}
