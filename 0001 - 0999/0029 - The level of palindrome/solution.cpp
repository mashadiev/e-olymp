#include <iostream>

long long reverseNumber(long long number) {
    long long reversed = 0;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}

int main() {
    long long number;
    long long stepCount = 0;

    std::cin >> number;

    long long reversed = reverseNumber(number);

    while (number != reversed) {
        stepCount++;

        number += reversed;
        reversed = reverseNumber(number);
    }

    std::cout << stepCount << '\n';

    return 0;
}
