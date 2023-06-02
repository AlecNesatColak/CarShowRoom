#pragma once
#include "Showroom.h"

class Dealership {
private:
    string name;
    int capacity;
    vector <Showroom> showrooms;

public:
    Dealership();
    Dealership(string name, unsigned int capacity);
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();
};

