#include <iostream>

int main() {
    int number;

    std::cin >> number;

    if (number < 10 || number > 99) {
        std::cout << "Invalid input\n";
        return 0;
    }

    int tens = number / 10;
    int units = number % 10;

    std::cout << tens << " " << units << '\n';

    return 0;
}
