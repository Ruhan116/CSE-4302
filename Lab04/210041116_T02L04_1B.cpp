#include <iostream>

using namespace std;

class Flight{
private:
    int flight_number;
    string destination;
    float distance;
    float max_fuel_capacity;
    double calc_fuel(){
        if(distance <= 1000) return 500;
        else if(distance <= 2000) return 1100;
        else return 2200;
    }
public:
    void feed_info(int f_num, string dest, float dist, float maxfuel){
        flight_number = f_num;
        destination = dest;
        distance = dist;
        max_fuel_capacity = maxfuel;
    }
    void show_info(){
        cout << "Flight Number: " << flight_number << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "Max Fuel Capacity: " << max_fuel_capacity << endl;
    }
    ~Flight(){
        if(calc_fuel() < max_fuel_capacity){
            cout << "Fuel capacity is fit for flight" << endl;
        }
        else{
            cout << "Not sufficient Fuel Capacity for this flight" << endl;
        }
    }
};

int main(){
    Flight f1;
    f1.feed_info(105, "DHK", 10000, 1000);
    f1.show_info();
}