// This is Practice Program for classes and object
#include <iostream>
using namespace std;

class car
{
public:
    string name;
    string model;
    string color;
    int wheel;

public:
    void drive()
    {
        cout << "Driving the car " << endl;
    };
    void accelerate();
};

void car::accelerate()
{
    cout << "accelerating the car " << endl;
};

int main()
{
    car car1;
    car1.name = "Audi";
    car1.model = "A3";
    car1.color = "Black";
    car1.wheel = 4;

    cout << "Car Name is " << car1.name << " and model is " << car1.model << " & color of car is " << car1.color << " And Number of Wheels are " << car1.wheel << endl;
    car1.drive();
    car1.accelerate();
    return 0;
}
