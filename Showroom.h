
#pragma once
#include "Vehicle.h"

class Showroom {
private:
    string name;
    vector<Vehicle> vehicles;
    int capacity;

public:
    Showroom();
    Showroom(string name, unsigned int capacity);
    vector<Vehicle> GetVehicleList();
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
};
