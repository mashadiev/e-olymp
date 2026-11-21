#include <iostream>

int main()
{
    long long a;
    std::cin >> a;

    std::cout << (a % 10 + a / 10) * (a % 10 + a / 10);

    return 0;
}
