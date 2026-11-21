#include <iostream>

int main() {
    int m, n, k;

    std::cin >> m >> n >> k;

    std::cout << m / n;

    if (k > 0) {
        std::cout << ".";

        int rem = m % n;

        for (int i = 0; i < k; i++) {
            rem *= 10;

            std::cout << rem / n;

            rem %= n;
        }
    }

    std::cout << std::endl;

    return 0;
}
