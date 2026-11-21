#include <iostream>
#include <cmath>

int main() {
    double ax, ay, bx, by, cx, cy;

    std::cin >> ax >> ay >> bx >> by >> cx >> cy;

    double ab = std::sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
    double ac = std::sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
    double bc = std::sqrt((bx - cx) * (bx - cx) + (by - cy) * (by - cy));

    if (ab + ac == bc) {
        std::cout << "1";
    } else {
        std::cout << "0";
    }

    return 0;
}
