#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == b && b == c)
        std::cout << 1;
    else if (a == b || b == c || a == c)
        std::cout << 2;
    else
        std::cout << 3;

    return 0;
}
