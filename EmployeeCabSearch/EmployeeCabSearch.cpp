// EmployeeCabSearch.cpp
#include "EmployeeCabSearch.h"
#include <cmath>
#include <algorithm>

EmployeeCabSearch::EmployeeCabSearch(const Location &empLoc, CabAllocationSystem &cabAllocSys)
    : employeeLocation(empLoc), cabAllocationSystem(cabAllocSys) {}

double EmployeeCabSearch::calculateDistance(const Location &loc1, const Location &loc2) const
{
    // Calculate Euclidean distance between two locations
    double lat1 = loc1.getLatitude();
    double lon1 = loc1.getLongitude();
    double lat2 = loc2.getLatitude();
    double lon2 = loc2.getLongitude();

    // Euclidean distance formula
    double distance = std::sqrt((lat2 - lat1) * (lat2 - lat1) + (lon2 - lon1) * (lon2 - lon1));

    return distance;
}

// function to return all cabs
std::vector<Cab>& EmployeeCabSearch::getAllCabs()
{
    std::vector<Cab> &allCabs = cabAllocationSystem.getAllCabs();
    return allCabs;
}


std::vector<Cab> EmployeeCabSearch::suggestNearbyCabs()
{
    // Logic to suggest nearby cabs based on employee location and real-time data
    std::vector<Cab> &allCabs = cabAllocationSystem.getAllCabs();

    std::vector<Cab> nearbyCabs;

    for (const auto &cab : allCabs)
    {
        // Calculate distance between employee location and cab location using Euclidean method

        // If cab is not available, continue
        if (cab.isCabFree() == false)
        {
            continue;
        }

        double distance = calculateDistance(employeeLocation, cab.getCurrentLocation());

        // Assuming a threshold distance of 100
        if (distance < 100.0)
        {
            nearbyCabs.push_back(cab);
        }
    }

    sort(nearbyCabs.begin(), nearbyCabs.end(), [this](const Cab &cab1, const Cab &cab2)
         { return calculateDistance(employeeLocation, cab1.getCurrentLocation()) < calculateDistance(employeeLocation, cab2.getCurrentLocation()); });

    // Return the suggested nearby cabs
    return nearbyCabs;
}
