#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int remaining = number;
    int sum = 0;
    int stepCount = 0;

    while (remaining > 0) {
        while (number > 0) {
            int digit = number % 10;

            sum += digit;
            number /= 10;
        }

        remaining -= sum;
        number = remaining;

        stepCount++;
        sum = 0;
    }

    std::cout << stepCount << '\n';

    return 0;
}
