#include <iostream>

using namespace std;

class Calculator{
private:
    int value;
public:
    Calculator():value(0){
    }
    Calculator(int val) : value(val){
    }
    int getValue(){
        return value;
    }
    void setValue(int val){
        value = val;
    }
    void add(int val){
        value += val;
    }
    void subtract(int val){
        value -= val;
    }
    void multiply(int val){
        value *= val;
    }
    void divideBy(int val){
        if(val == 0){
            cout << "Divide by 0 is undefined." << endl;
        }
        else{
            value /= val;
        }
    }
    void clear(){
        value = 0;
    }
    void display(){
        cout << "Calculator display: " << value << endl;
    }
    ~Calculator(){
        cout << "Calculator object is destroyed" << endl;
    }

};

int main(){
    Calculator calc;
    cout << "add 10" << endl;
    calc.add(10);
    calc.display();
    cout << "add 7" << endl;
    calc.add(7);
    calc.display();
    cout << "multiply 31" << endl;
    calc.multiply(31);
    calc.display();
    cout << "subtract 42" << endl;
    calc.subtract(42);
    calc.display();
    cout << "divide by 7" << endl;
    calc.divideBy(7);
    calc.display();
    cout << "divide by 0" << endl;
    calc.divideBy(0);
    calc.display();
    cout << "add 3" << endl;
    calc.add(3);
    calc.display();
    cout << "subtract 1" << endl;
    calc.subtract(1);
    calc.display();
    cout << "clear" << endl;
    calc.clear();
    calc.display();
    return 0;
}