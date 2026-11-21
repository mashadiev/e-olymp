#include <iostream>

int main() {
    long long a, b, c;

    std::cin >> a >> b >> c;

    if ((a > b && b > c) || (c > b && b > a)) {
        std::cout << b;
    }

    if ((b > a && a > c) || (c > a && a > b)) {
        std::cout << a;
    }

    if ((b > c && c > a) || (a > c && c > b)) {
        std::cout << c;
    }

    return 0;
}
