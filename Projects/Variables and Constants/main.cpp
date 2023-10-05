// Section 6
// Constants

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
//     cout << "\nHow many rooms would you like cleaned? ";
    
//     int number_of_rooms {0};
//     cin >> number_of_rooms;
    
//     const double  price_per_room {32.5};
//     const double sales_tax {0.06};
//     const int estimate_expiry {30}; // days
    
//     cout << "\nEstimate for carpet cleaning service" << endl;
//     cout << "Number of rooms: " << number_of_rooms << endl;
//     cout << "Price per room: $" << price_per_room << endl;
//     cout << "Cost : $" << price_per_room * number_of_rooms << endl;
//     cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
//     cout << "===============================" << endl;
//     cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
//     cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// const int hamburger {5};
// const int cheeseburger {8};
// const double pizza {12.5};

// int main() {
//     cout << "Welcome to our food shop!" << endl;
//     cout << "What would you like to eat?\n" << endl;
    
//     cout << "-----------------------------------------" << endl;

//     cout << "\nPress 1 for a hamburger" << endl;
//     cout << "Press 2 for cheeseburger" << endl;
//     cout << "Press 3 for pizza" << endl;

//     int choice;
//     cin >> choice;
    
//     if (choice == 1) {
//         cout << "\nGreat!\nYour total is: $" << hamburger << ".00" << endl;
//     }

//     if (choice == 2) {
//         cout << "\nAwesome!\nYour total is: $" << cheeseburger << ".00" << endl;
//     }

//     if (choice == 3) {
//         cout << "\nAwesome!\nYour total is: $" << pizza << "0" << endl;
//     }

//     cout << "\nThank you for your order!\nMove on to the pickup window to recieve your order." << endl;
// }

#include <iostream>
using namespace std;

const unsigned int largeRoom {35};
const unsigned int smallRoom {25};
const double salesTax {6.6};
const unsigned int validFor {30};

int main() {
    cout << "Welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "We have two size options for you to pick from:" << endl;
    cout << "   Large Room: $" << largeRoom << endl;
    cout << "   Small Room: $" << smallRoom << endl;
    cout << "Sales Tax is " << salesTax << "%" << endl;
    cout << "Estimates are valid for " << validFor << " days.\n\n" << endl;

    unsigned int large_rooms {0};
    cout << "Please enter how many Large Rooms you would need serviced: ";
    cin >> large_rooms;

    unsigned int small_rooms {0};
    cout << "Now please enter how many Small Rooms you would need serviced: ";
    cin >> small_rooms;

    unsigned int roomTotal {(small_rooms * smallRoom) + (large_rooms * largeRoom)};
    double taxTotal {roomTotal * salesTax / 100};

    cout << "\n\nTotal Estimate: " << endl;
    cout << "   Number of Small Rooms: " << small_rooms << endl;
    cout << "   Number of Large Rooms: " << large_rooms << endl;
    cout << "   Price per Large Room: $" << largeRoom << endl;
    cout << "   Price per Small Room: $" << smallRoom << endl;
    cout << "   Cost: $" << roomTotal << endl;
    cout << "   Tax: $" << taxTotal << endl;
    cout << "   Total: $" << roomTotal + taxTotal << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "This estimate is valid for " << validFor << " days." << endl;
}