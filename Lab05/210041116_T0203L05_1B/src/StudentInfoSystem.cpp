#include "StudentInfoSystem.h"

StudentInfoSystem::StudentInfoSystem() : student_name(""), DOB(""), ID(0), CGPA(0) {}

StudentInfoSystem::~StudentInfoSystem() {}

void StudentInfoSystem::setInfo(string name, string date, int id, float cgpa) {
    Setstudent_name(name);
    SetDOB(date);
    SetID(id);
    SetCGPA(cgpa);
}

void StudentInfoSystem::getInfo() const {
    cout << "Student Name: " << Getstudent_name() << endl;
    cout << "Student Date of Birth: " << GetDOB() << endl;
    cout << "Student ID: " << GetID() << endl;
    cout << "Student CGPA: " << GetCGPA() << endl;
}

date StudentInfoSystem::create_date() const {
    date birthdate;
    int str[3] = {0};
    int i = 0, x = 0;
    while (i < DOB.length()) {
        if (DOB[i] == '/') {
            x++;
        } else {
            str[x] = str[x] * 10 + (DOB[i] - '0');
        }
        i++;
    }
    birthdate.dd = str[0];
    birthdate.mm = str[1];
    birthdate.yyyy = str[2];
    return birthdate;
}

void StudentInfoSystem::getAge() const {
    date birthdate = create_date();
    int date, month, year;
    cout << "Enter today's date: ";
    cin >> date;
    cout << "Enter current month: ";
    cin >> month;
    cout << "Enter current year: ";
    cin >> year;
    int age = year - birthdate.yyyy;
    if (month < birthdate.mm || (month == birthdate.mm && date < birthdate.dd)) {
        age--;
    }
    cout << "Age: " << age << endl;
}
