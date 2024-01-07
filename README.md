# Cab Allocation System

# **Smart Cab Allocation System for Efficient Trip Planning**

## Overview

**1. Admin's Cab Allocation Optimization:**

- **Objective:** Develop an algorithm to optimize cab allocation for trips, reducing overall travel distance.
- **Tasks:**
    - Develop an algorithm suggesting the best cab based on proximity to the trip start location.
    - Integrate real-time location data for cabs and trip start locations.
    - Test the algorithm's effectiveness in minimizing travel distance and improving overall trip efficiency.

*Summary:* The focus here is on creating an algorithm that optimally allocates cabs for trips by considering the proximity of cabs to trip start locations. The inclusion of real-time location data enhances the precision of the algorithm, and testing ensures its effectiveness in minimizing travel distance.

**2. Employee's Cab Search Optimization:**

- **Objective:** Enhance the user experience for employees searching for cabs by suggesting nearby cabs that are currently in use.
- **Tasks:**
    - Utilize real-time data to display cabs currently engaged in trips and nearby to the employee's location.
    - Evaluate the system's effectiveness in providing quick and relevant cab suggestions for employees.

*Summary:* This aspect focuses on improving the user experience for employees by suggesting nearby cabs that are already in use. Real-time data plays a crucial role in providing accurate suggestions, and the evaluation process ensures the system's effectiveness in offering relevant and timely suggestions.

**3. Real-Time Location Data Integration:**

- **Objective:** Ensure seamless integration of real-time location data for cabs and trip start locations to enhance the accuracy of suggestions.
- **Tasks:**
    - Establish a robust system for real-time tracking of cab locations.
    - Integrate location data into the cab allocation algorithm to provide up-to-date suggestions.
    - Address potential challenges such as data latency or inaccuracies to maintain system reliability.

*Summary:* The primary goal is to seamlessly integrate real-time location data into the system, ensuring accuracy in suggestions. This involves establishing a robust tracking system, integrating the data into the allocation algorithm, and addressing potential challenges like data latency or inaccuracies to maintain the overall reliability of the system.

In summary, the project aims to create a comprehensive Smart Cab Allocation System that optimizes cab allocation for efficient trip planning. It addresses both administrative and employee perspectives, leveraging real-time location data for enhanced accuracy and effectiveness in cab suggestions. In addition to providing the most efficient cab suggestion for the trip, the project also includes real-time data updates with the completion of the current trip and provides updated cab suggestions for a new location. The project encompasses algorithm development, real-time data integration, and thorough testing and evaluation processes. We provide console logging for the features to indicate the results of our algorithm. We provide the following 5 options to the user:

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled.png)

## Tech Stack Used

**1. Programming Language: C++**

- **Description:** The core of the Smart Cab Allocation System is built using the C++ programming language. C++ is chosen for its efficiency, performance, and versatility. Its rich set of features allows for robust system development, particularly in scenarios where real-time processing and optimization are crucial.

**2. Object-Oriented Programming (OOP) Principles:**

- **Description:** OOP principles have been employed to enhance the code's modularity, readability, and maintainability. The system is structured around key OOP concepts such as encapsulation, inheritance, and polymorphism. This approach facilitates the creation of modular components, making it easier to understand, extend, and modify the codebase.

**3. Real-Time Data Integration:**

- **Description:** To ensure seamless real-time data integration, the system utilizes C++ features such as classes and objects to represent and manage cab locations and trip start locations. The use of OOP principles allows for the creation of well-defined interfaces and interactions between these objects, enabling efficient real-time data handling.

**4. Algorithm Development:**

- **Description:** The cab allocation optimization algorithm is implemented using C++ and is designed with a focus on object-oriented design. Classes and structures are utilized to represent key entities like trips and cabs, and methods within these classes encapsulate the logic for allocating the best cab based on proximity. This modular approach enhances code clarity and promotes reusability.

## Various features

### Authentication

- Our cab booking system incorporates a robust **static authentication mechanism** to ensure secure access and personalized services for users. Before users can book a cab, they are required to authenticate by providing their unique username and password, which are pre-registered in the system.
- **Authentication Process:**
1. User is prompted to enter their username and password.
2. The entered credentials are checked against the stored data.
3. If the authentication is successful, the user gains permission to book a cab; otherwise, they are informed of the authentication failure.
- **Credential Validity Check:** The static authentication mechanism checks the validity of the entered username and password. If a match is found in the stored credentials, the authentication is successful, granting the user access to book a cab.
- **Authentication Status Handling:** Users receive immediate feedback regarding the success or failure of their authentication attempt. This transparent approach ensures users are informed about the outcome and can take appropriate actions.

Authentication Successful:

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(1).png)

Authentication failure:

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(2).png)

### Cost Estimation

- **Time Complexity and Space Complexity**:

The **findBestCab** operation, where the algorithm determines the best cab for a trip.
Time Complexity: We perform a linear search to find the nearest available cab, the time complexity is O(n), where n is the number of cabs. 

The space complexity depends on the storage and representation of cab locations. In the provided code, it is O(n) for storing the data for all the cabs.

### **Handling System Failure Cases**

- **Fault Tolerance**: The system is designed with high fault tolerance.
- **Database Consistency**: In the event of a system failure, the database remains constant. During system startup, the database can be seamlessly utilized, minimizing downtime to the system's rebooting time.

### **Object-Oriented Programming Language (OOPS)**

- **Abstraction and Encapsulation**: Robust OOPS principles are followed, with extensive abstraction in the backend. Multiple models are created to abstract and encapsulate data storage, enhancing system organization.
    
    Using private and public access modifiers to provide abstraction and encapsulation.
    
    ![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(3).png)
    
- **Polymorphism**: Implemented to ensure flexibility and adaptability within the codebase.
    
    Overloading **EmployeeCabSearch::getAllCabs()** and **CabAllocationSystem::getAllCabs()**
    
- **Modularization**: The code is highly modularized, which enables easy addition of new functionality. Each feature is organized into classes, simplifying debugging and maintenance and helps in following well-formed OOP principles.
  
![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(4).png)


### **Trade-offs in the System**

Since this was created in just less than a day there are bound to be some trade-offs.

- **UI Choice**: A CLI-style UI was chosen over a full-fledged browser UI due to the simplicity of operations.
- **Performance vs Accuracy:** Opting for a simpler algorithm to allocate cabs quickly. Implementing a more complex algorithm that provides more precise cab suggestions but may take longer to execute.
- **Consistency vs. Availability in Real-Time Data Integration:** Achieving strong consistency might impact system availability, especially in distributed scenarios.

### **Error and Exception Handling**

- **Try-Catch Blocks**: Implemented at critical operations to handle potential issues.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(5).png)

- **Comprehensive Error Handling**: Ensures robust application performance by providing meaningful error messages.
    
    ![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(6).png)
    

## **Backend Installation**

### **Prerequisites**

- clang version ≥ 14.0.6
- g++ ≥ 12.2.0

### **Steps**

1. **Clone the repository:**

```bash
git clone <https://github.com/aniket2405/SmartCabAllocationSystem.git>
cd SmartCabAllocationSystem

```

## 

## Sample Output ScreenShots

- Initial location of Cabs in the form of latitude and longitude. We can add cabs as and when desired.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(7).png)

- User authenticates and enters their current location. CLI tool to ask users for a preference of what they want to do.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(8).png)

1. Display Nearby Cab Locations: Displays all the nearby cab allocations within a given limit.
    
    ![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(9).png)
    
2. Request a Cab - Display the best possible cab and the fare based on the current location and
    
    ask the user if they want to book that particular cab or not. Users can choose 1 (yes) or 0 (no).
    
    If users select a 1, the cab is booked. Otherwise, the cab is not booked and users can choose again.
    
   ![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(10).png)

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(11).png)

3. Trip completed - User location and cab location are updated with the destination location after the trip is completed. The new location for each is displayed below and is updated in the database.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(12).png)

No current ongoing trip to complete. Display an error if the user selects the option for completing a trip when he/she has no ongoing trip.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(13).png)

4.1 Get UserID, user location, and currently booked cab (cabID for valid trip, -1 for no current trip)
    
![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(14).png)
    

4.2 The cab location was updated after the trip. Users can now search for cabs based 
    
    on the new location. In our example, cab1’s location was updated after it completed 
    
    the last trip with user1, which can be seen below. The nearby cabs are suggested based on 
    
    the new latitude and longitude.
    

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(15).png)

5. Exit the program from the CLI.

![Untitled](https://github.com/aniket2405/SmartCabAllocationSystem/blob/master/Images/Untitled%20(16).png)
