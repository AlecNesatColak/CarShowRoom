
#include "Dealership.h"
#include <iostream>

using namespace std;
Dealership::Dealership() {
    this->name = "Generic Dealership";
    this->capacity = 0;
}

Dealership::Dealership(std::string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if (showrooms.size() == capacity) {
        cout << "Dealership is full, can't add another showroom!" << endl;
    } else {
        showrooms.push_back(s);
    }
}

float Dealership::GetAveragePrice() {
    float totalPrice = 0;
    int count = 0;
    for (int i = 0; i < showrooms.size(); i++) {
        totalPrice += showrooms[i].GetInventoryValue();
            count += showrooms[i].GetVehicleList().size();
    }
    return totalPrice/count;
}

void Dealership::ShowInventory() {
    float totalPrice = 0;
    int count = 0;
    if (showrooms.empty()) {
        cout << this->name << " is empty!" << endl;
        cout << "Average car price: $0.00";
    } else {
        for (int i = 0; i < showrooms.size(); i++) {
            showrooms[i].ShowInventory();
            cout <<endl;
            totalPrice += showrooms[i].GetInventoryValue();
            count += showrooms[i].GetVehicleList().size();
        }
        cout << "Average car price: $" << totalPrice/count;

    }
}
