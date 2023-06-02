#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() {
    this->make = "COP3503";
    this->model = "Rust Bucket";
    this->year = 1900;
    this->price = 0;
    this->miles = 0;
}

Vehicle::Vehicle(std::string make, std::string model, int year, float price, int mileage) {
    this->make = make;
    this->model = model;
    this->year = year;
    this->price = price;
    this->miles = mileage;
}

void Vehicle::Display() {
    cout << this->year << " " << this->make << " " << this->model << " $" << this->price << " " << this->miles << endl;
}

string Vehicle::GetYearMakeModel() {
    string yearMakeModel = to_string(year) + " " + make + " " + model;
    return yearMakeModel;
}

float Vehicle::GetPrice() {
    return this->price;
}
