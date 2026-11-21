#include <iostream>

int main() {
    int n;
    std::cin >> n;

    double sum = 0;
    int days = 0;

    for (int i = n; i >= 1; i--) {
        if (sum + 1.0 / i <= 0.5) {
            sum += 1.0 / i;
            days++;
        } else {
            break;
        }
    }

    std::cout << n - days << std::endl;

    return 0;
}
