#include <iostream>
#include "Location/Location.h"
#include "Cab/Cab.h"
#include "Trip/Trip.h"
#include "CabAllocationSystem/CabAllocationSystem.h"
#include "EmployeeCabSearch/EmployeeCabSearch.h"
#include "Authentication/AuthSystem.h"
#include "User/UserFactory.h"
#include "Authentication/AuthenticationHelper.h"
#include "User/User.h"
#include "ConsoleUI/ConsoleUI.h"

int main()
{

    // User AUTHENTICATION
    AuthSystem authSystem;

    // Create users and add them to the authentication system
    User user1 = UserFactory::createUser(1, "Aniket", "pass1");
    User user2 = UserFactory::createUser(2, "Mehul", "pass2");
    authSystem.addUser(user1);
    authSystem.addUser(user2);

    // User authentication
    int authenticationSuccessful = AuthenticationHelper::performAuthentication(authSystem);

    // find the current user ID after authentication
    User currentUser = authSystem.getUser(authenticationSuccessful);
    int currentUserId = -1;

    // Check if authentication was successful
    if (authenticationSuccessful != -1)
    {
        // Get the current user ID
        currentUserId = authenticationSuccessful;
    }
    else
    {
        std::cerr << "Authentication failed. Exiting the program." << std::endl;
        exit(EXIT_FAILURE);
    }

    // Smart Cab Allocation System logic

    // Create a CabAllocationSystem
    CabAllocationSystem cabAllocationSystem;

    // Create and add cabs to the system
    Cab cab1(1, Location(37.7749, -122.4194)); // Cab 1 at San Francisco
    Cab cab2(2, Location(34.0522, -118.2437)); // Cab 2 at Los Angeles
    Cab cab3(3, Location(31.0522, -129.2437)); // Cab 3 at Los Angeles

    cabAllocationSystem.addCab(cab1);
    cabAllocationSystem.addCab(cab2);
    cabAllocationSystem.addCab(cab3);

    // Display initial cab locations
    std::cout << "Initial Cab Locations:" << std::endl;
    std::cout << "Cab 1: (" << cab1.getCurrentLocation().getLatitude() << ", " << cab1.getCurrentLocation().getLongitude() << ")" << std::endl;
    std::cout << "Cab 2: (" << cab2.getCurrentLocation().getLatitude() << ", " << cab2.getCurrentLocation().getLongitude() << ")" << std::endl;
    std::cout << "Cab 3: (" << cab3.getCurrentLocation().getLatitude() << ", " << cab3.getCurrentLocation().getLongitude() << ")" << std::endl;

    ConsoleUI consoleUI(cabAllocationSystem, currentUser);

    // Process user input through the console UI
    std::cout << "\n==== Smart Cab Allocation System ====\n";
    consoleUI.processUserInput(cabAllocationSystem, currentUser);
    std::cout << "====================================\n";

    return 0;
}
