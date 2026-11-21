#include <iostream>

int main() {
    long long sum = 0;
    int a, b, c;

    std::cin >> a >> b >> c;

    sum = -(a * 60 * 60 + b * 60 + c);

    std::cin >> a >> b >> c;

    sum += a * 60 * 60 + b * 60 + c;

    std::cout << sum / 3600 << " "
              << (sum % 3600) / 60 << " "
              << sum % 60 << '\n';

    return 0;
}
