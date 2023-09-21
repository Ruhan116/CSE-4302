#include "StudentCollection.h"

using namespace std;

void StudentCollection::addStudent(std::string name, double grade)
{
    if (numStudents >= 10) {
        cout << ("Maximum number of students reached") << endl;
        return;
    }

    names[numStudents] = name;
    grades[numStudents] = grade;
    numStudents++;
}

double StudentCollection::operator[](const std::string& name)
{
    cout << "Enter 0 if you want to search\n Enter 1 if you want to  modify" << endl;
    int choice;
    cin >> choice;
    if (choice) {
        cout << "Enter new grade: ";
        double gr;
        cin >> gr;
        for (int i = 0; i < numStudents; i++) {
            if (names[i] == name) {
                if (names[i] == name) {
                    grades[i] = gr;
                    return -1;
                }
            }
        }
    }
    else {
        for (int i = 0; i < numStudents; i++) {
            return grades[i];
        }
    }

    cout << ("Student not found") << endl;
}

