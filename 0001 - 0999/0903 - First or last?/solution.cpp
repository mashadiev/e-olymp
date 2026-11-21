#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a;

    b = a / 100;
    c = a % 10;

    if (b == c)
        std::cout << "=";
    else if (b < c)
        std::cout << c;
    else
        std::cout << b;

    return 0;
}
