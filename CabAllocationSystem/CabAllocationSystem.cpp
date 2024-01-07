// CabAllocationSystem.cpp
#include "CabAllocationSystem.h"
#include <limits>
#include <iostream>

void CabAllocationSystem::addCab(const Cab &newCab)
{
    // Implementation to add a new cab to the system
    cabs.push_back(newCab);
}

std::vector<Cab>& CabAllocationSystem::getAllCabs()
{
    return cabs;
}

Cab &CabAllocationSystem::getCabByID(int cabId)
{
    for (auto &cab : cabs)
    {
        if (cab.getCabId() == cabId)
        {
            return cab;
        }
    }

    throw std::runtime_error("Cab not found");
}

double CabAllocationSystem::calculateDistance(const Location &loc1, const Location &loc2) const
{
    double latDiff = loc1.latitude - loc2.latitude;
    double lonDiff = loc1.longitude - loc2.longitude;
    return std::sqrt(latDiff * latDiff + lonDiff * lonDiff);
}

Cab &CabAllocationSystem::findBestCab(const Trip &trip)
{
    // Implementation to find the best cab for a trip based on proximity
    int bestCabId = -1;
    double minDistance = std::numeric_limits<double>::max();

    cabs = getAllCabs();

    for (const auto &cab : cabs)
    {
        double distance = calculateDistance(cab.getCurrentLocation(), trip.getPickupLocation());
        if (distance < minDistance)
        {
            minDistance = distance;
            bestCabId = cab.getCabId();
        }
    }

    if (bestCabId == -1)
    {
        throw std::runtime_error("No cabs available");
    }

    return cabs[bestCabId - 1];
}

double CabAllocationSystem::calculateFareForBestCab(const Cab &bestCab, const Location &startLocation, const Location &endLocation) const
{
    // Calculate distance between start and end locations
    double distance = calculateDistance(startLocation, endLocation);

    // Pricing model
    // Basic fare + distance-based fare
    double basicFare = 5.0;
    double farePerKilometer = 2.0;

    // Calculate the total fare
    double totalFare = basicFare + (farePerKilometer * distance);

    // We can also incorporate additional factors such as time of day, surge pricing, etc.
    return totalFare;
}

void CabAllocationSystem::updateCabLocation(int cabId, const Location &newLocation)
{
    for (Cab &cab : cabs)
    {
        if (cab.getCabId() == cabId)
        {
            cab.setCurrentLocation(newLocation);
            break;
        }
    }
}