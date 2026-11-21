#include <iostream>
#include <cmath>

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
}

int main()
{
    double ax, ay, bx, by, cx, cy, px, py;

    std::cin >> ax >> ay;
    std::cin >> bx >> by;
    std::cin >> cx >> cy;
    std::cin >> px >> py;

    double S = area(ax, ay, bx, by, cx, cy);

    double S1 = area(px, py, ax, ay, bx, by);
    double S2 = area(px, py, bx, by, cx, cy);
    double S3 = area(px, py, cx, cy, ax, ay);

    if (S1 + S2 + S3 > S)
        std::cout << "Out";
    else if (S1 == 0 || S2 == 0 || S3 == 0)
        std::cout << "On";
    else
        std::cout << "In";

    return 0;
}
