#ifndef STUDENTINFOSYSTEM_H
#define STUDENTINFOSYSTEM_H

#include <iostream>
using namespace std;

typedef struct date {
    int dd;
    int mm;
    int yyyy;
} date;

class StudentInfoSystem {
public:
    StudentInfoSystem();
    ~StudentInfoSystem();

    string Getstudent_name() const { return student_name; }
    void Setstudent_name(string val) { student_name = val; }
    string GetDOB() const { return DOB; }
    void SetDOB(string val) { DOB = val; }
    int GetID() const { return ID; }
    void SetID(int val) { ID = val; }
    float GetCGPA() const { return CGPA; }
    void SetCGPA(float val) { CGPA = val; }

    void setInfo(string name, string date, int id, float cgpa);
    void getInfo() const;

    void getAge() const;

private:
    string student_name;
    string DOB;
    int ID;
    float CGPA;

    date create_date() const;
};

#endif // STUDENTINFOSYSTEM_H
