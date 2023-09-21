#pragma once
#include <iostream>
#include <string>

using namespace std;

class StudentCollection {
private:
    string names[10];
    double grades[10];
    int numStudents;
public:
    StudentCollection() : numStudents(0) {}

    void addStudent(string name, double grade);

    double operator[](const string& name);

};

