#include <iostream>
#include <sstream>

using namespace std;
int main() {
    int fav_num;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> fav_num;
    std::cout << "That's my favorite number too." << std::endl;

    std::stringstream ss;
    ss << "Seriously, my favorite number is " << fav_num << " too.";
    std::cout << ss.str() << std::endl;

    return 0;
}