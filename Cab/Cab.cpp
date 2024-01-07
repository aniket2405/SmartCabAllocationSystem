// Cab.cpp
#include "Cab.h"
#include <iostream>

// Constructor
Cab::Cab(int id, const Location &currentLoc) : currentLocation(currentLoc), cabId(id) {}

const Location &Cab::getCurrentLocation() const
{
    return currentLocation;
}

void Cab::setCurrentLocation(const Location &location)
{
    currentLocation = location;
}

int Cab::getCabId() const
{
    return cabId;
}

bool Cab::isCabFree() const
{
    return isFree;
}

// Function to book a cab for the user and set the isFree variable to false
void Cab::bookCab()
{
    isFree = false;
}

void Cab::unbookCab()
{
    isFree = true;
}

char *Cab::getDriverName() const
{
    return driverName;
}

void Cab::updateLocation(const Location &newLocation)
{
    std::cout << "Cab " << cabId << " is now at " << newLocation.getLatitude() << ", " << newLocation.getLongitude() << std::endl;
    currentLocation = newLocation;
    std::cout << "Cab " << cabId << " is now at " << currentLocation.getLatitude() << ", " << currentLocation.getLongitude() << std::endl;
}
