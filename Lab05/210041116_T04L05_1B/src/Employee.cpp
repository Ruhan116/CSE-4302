#include "employee.h"
#include <iostream>

Employee::Employee() {
    name = "John Doe";
    dateOfBirth = "1 January 2002";
    salary = 10000.0;
}

std::string Employee::getName() const {
    return name;
}

void Employee::setName(const std::string& newName) {
    if (newName.length() > 2) {
        name = newName;
    }
}

std::string Employee::getDateOfBirth() const {
    return dateOfBirth;
}

void Employee::setDateOfBirth(const std::string& newDateOfBirth) {
    int dobDay, dobMonth, dobYear;
    int refDay = 7, refMonth = 9, refYear = 2023;

    sscanf(newDateOfBirth.c_str(), "%d/%d/%d", &dobDay, &dobMonth, &dobYear);

    if (refYear - dobYear > 18 || (refYear - dobYear == 18 && dobMonth <= refMonth && dobDay <= refDay)) {
        dateOfBirth = newDateOfBirth;
    }
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double newSalary) {
    if (newSalary >= 10000 && newSalary <= 100000) {
        salary = newSalary;
    }
}

void Employee::setInfo(const std::string& newName, const std::string& newDateOfBirth, double newSalary) {
    setName(newName);
    setDateOfBirth(newDateOfBirth);
    setSalary(newSalary);
}

void Employee::getInfo() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Date of Birth: " << getDateOfBirth() << std::endl;
    std::cout << "Salary: BDT " << getSalary() << std::endl;
}
