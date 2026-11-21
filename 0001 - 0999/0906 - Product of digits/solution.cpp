#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    std::cout << (a / 100) * (a / 10 % 10) * (a % 10);

    return 0;
}
