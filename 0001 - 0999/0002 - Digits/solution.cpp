#include <iostream>
#include <string>

int main() {
    int number;
    std::cin >> number;

    std::string numberString = std::to_string(number);

    std::cout << numberString.length() << '\n';

    return 0;
}
