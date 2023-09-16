#include <iostream>

using namespace std;

class ZooAnimal{
private:
    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weight;
    int height;
public:
    ZooAnimal():nameOfAnimal(""), birthYear(2023), cageNumber(0), weight(1), height(1){}
    ZooAnimal(
        string animal_name,
        int birth_year,
        int cage_number,
        float weight,
        int height
    ){
        nameOfAnimal = animal_name;
        birthYear = birth_year;
        cageNumber = cage_number;
        this->weight = weight;
        this->height = height;
    }
    void set_name(string name){
        nameOfAnimal = name;
    }
    string get_name(){
        return nameOfAnimal;
    }
    void set_birth(int year){
        birthYear = year;
    }
    int get_birth(){
        return birthYear;
    }
    void set_cage(int cage){
        cageNumber = cage;
    }
    int get_cage(){
        return cageNumber;
    }
    void set_weight(float weight){
        this->weight = weight;
    }
    float get_weight(){
        return weight;
    }
    void set_height(int height){
        this->height = height;
    }
    int get_height(){
        return height;
    }
    int getAge(){
        int age = 2023 - birthYear;
        return age;
    }
    void displayInfo(){
        cout << "Animal Name: " << nameOfAnimal << endl;
        cout << "Animal Birth Year: " << birthYear << endl;
        cout << "Animal Cage Number: " << cageNumber << endl;
        cout << "Animal Weight: " << weight << endl;
        cout << "Animal Heigth: " << height << endl;
    }
    ~ZooAnimal(){
        cout << "ZooAnimal object destroyed for: " << endl;
        displayInfo();
    }

};

int main(){
    ZooAnimal alien;
    alien.displayInfo();
    cout << "Age: " << alien.getAge() << endl;
}