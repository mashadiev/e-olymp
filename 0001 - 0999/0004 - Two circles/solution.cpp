#include <cstdlib>
#include <iostream>
#include <cmath>

int main() {
    double x1, y1, r1;
    double x2, y2, r2;

    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        std::cout << -1 << std::endl;
    }
    else if (
        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) == r1 + r2 ||

        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) + r2 == r1 ||

        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) + r1 == r2
    ) {
        std::cout << 1 << std::endl;
    }
    else if (
        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) > r1 + r2
    ) {
        std::cout << 0 << std::endl;
    }
    else if (
        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) + r2 < r1 ||

        std::sqrt((x2 - x1) * (x2 - x1) +
                  (y2 - y1) * (y2 - y1)) + r1 < r2
    ) {
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << 2 << std::endl;
    }

    return 0;
}
