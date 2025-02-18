#include <bits/stdc++.h>
using namespace std;

class Vehicle {
protected:
    string name;
    int notire;
    string model;

public:
    Vehicle(string name, string model, int tire) {
        cout << "I am inside vehicle class" << endl;
        this->name = name;
        this->notire = tire;
        this->model = model;
    }

    void start_engine() { 
        cout << "Engine is starting: " << name << " " << model << endl;
    }

    void stop_engine() { // Fixed function name
        cout << "Engine is stopping: " << name << " " << model << endl;
    }
};

class Car : public Vehicle {
public:
    int noofDoors;
    string transmission;

    Car(string name, string model, int tire, int doors, string type)
        : Vehicle(name, model, tire) {
        cout << "I am inside car class" << endl;
        this->noofDoors = doors;
        this->transmission = type;
    }

    void startAc() {
        cout << "AC of " << name << " has started" << endl; 
    }
};

int main() {
    Car A("BMW", "SUV", 4, 4, "Automatic");
    // A.startAc(); 
    return 0;
}
