#include "Showroom.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Showroom::Showroom() {
    this->name = "Unnamed Showroom";
    this->capacity = 0;
}

Showroom::Showroom(std::string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

vector<Vehicle> Showroom::GetVehicleList() {
    return this->vehicles;
}

void Showroom::AddVehicle(Vehicle v) {
    if (vehicles.size() == capacity) {
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    } else {
        vehicles.push_back(v);
    }
}

void Showroom::ShowInventory() {
    if (vehicles.empty()) {
        cout << this->name << " is empty!" << endl;
    } else {
        cout << "Vehicles in " << this->name << endl;
        for (int i = 0; i < vehicles.size(); i++) {
            vehicles[i].Display();
        }
    }

}

float Showroom::GetInventoryValue() {
    float priceSum = 0;
    for (int i = 0; i < vehicles.size(); i++) {
        priceSum += vehicles[i].GetPrice();
    }
    return priceSum;
}
