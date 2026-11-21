#include <iostream>

int main() {
    long long x, n, m, d;

    std::cin >> x >> n >> m;

    d = x;

    for (int i = 2; i <= n; i++) {
        x = x * d;
        x = x % m;
    }

    std::cout << x;

    return 0;
}