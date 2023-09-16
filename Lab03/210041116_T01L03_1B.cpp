#include <iostream>

using namespace std;

class Counter{
private:
    int count = 0;
    int step;
public:
    void setIncrementStep(int step_val){
        step = step_val;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count += step;
    }
    void resetCount(){
        count = 0;
    }
};

int main(){
    Counter counter;
    cout << "Setting step value to 5" << endl;
    counter.setIncrementStep(5);
    cout << "Current count: " << counter.getCount() << endl;
    cout << "Updating counter once." << endl;
    counter.increment();
    cout << "Current count: " << counter.getCount() << endl;
    cout << "Updating counter again." << endl;
    counter.increment();
    cout << "Current count: " << counter.getCount() << endl;
    cout << "Resetting Counter." << endl;
    counter.resetCount();
    cout << "Current count: " << counter.getCount() << endl;
}