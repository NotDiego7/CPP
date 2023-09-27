// #include <iostream>

// int main() {
//     int fav_num;

//     std::cout << "Enter your favorite number between 1 and 100: ";
    
//     std::cin >> fav_num;

//     std::cout << "That's my favorite number too." << std::endl;


//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    cout << "Enter the width or height. " << endl;
    int first_num {};
    cin >> first_num;

    cout << "Now enter the second integer. " << endl;
    int second_num {};
    cin >> second_num;

    int result {first_num * second_num};

    cout << "Result: " << result << endl;
}