#include <iostream>

using namespace std;

class RationalNumber{
private:
    int numerator;
    int denominator;
public:
    void assign(int numerator, int denominator){
        if(denominator != 0){
            this->denominator = denominator;
            this->numerator = numerator;
        }
        else{
            cout << "This denominator is invalid" << endl;
        }
    }
    double convert(){
        return ((double)numerator)/((double)denominator);
    }
    void invert(){
        if(numerator != 0){
            int temp;
            temp = numerator;
            numerator = denominator;
            denominator = temp;
        }
        else{
            cout << "Inveriting this will return an Invalid value" << endl;
        }
    }
    void print(){
        cout <<"The Rational Number is: " << numerator << '/' << denominator << endl;
    }
};

int main(){
    RationalNumber num;
    cout << "Trying with Invalid values(5/0)" << endl;
    num.assign(5,0);
    cout << "Trying with values(3/2)" << endl;
    num.assign(3,2);
    num.print();
    cout << "Converting number to double: "<< num.convert() << endl;
    cout << "Trying Inverting of the number" << endl;
    num.invert();
    num.print();
    cout << "Trying with values(0/7)" << endl;
    num.assign(0,7);
    num.print();
    cout << "Trying invalid invertion" << endl;
    num.invert();   
}