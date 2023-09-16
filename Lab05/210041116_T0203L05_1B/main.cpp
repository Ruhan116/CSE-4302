#include <iostream>
#include "StudentInfoSystem.h"
using namespace std;

int main() {
    StudentInfoSystem system;
    system.setInfo("Ruhan", "18/04/2002", 210041116, 3.95);
    system.getInfo();
    system.getAge();
    return 0;
}
