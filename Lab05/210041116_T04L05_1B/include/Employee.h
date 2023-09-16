#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    std::string dateOfBirth;
    double salary;

public:
    Employee();

    std::string getName() const;
    void setName(const std::string& newName);

    std::string getDateOfBirth() const;
    void setDateOfBirth(const std::string& newDateOfBirth);

    double getSalary() const;
    void setSalary(double newSalary);

    void setInfo(const std::string& newName, const std::string& newDateOfBirth, double newSalary);
    void getInfo() const;
};

#endif // EMPLOYEE_H
