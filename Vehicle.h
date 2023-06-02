
#include <string>
#include <vector>
#pragma once;

using namespace std;

class Vehicle {
private:
    string make;
    string model;
    unsigned int year;
    float price;
    unsigned int miles;

public:
    Vehicle();
    Vehicle(string make, string model, int year, float price, int mileage);
    void Display();
    string GetYearMakeModel();
    float GetPrice();

};
