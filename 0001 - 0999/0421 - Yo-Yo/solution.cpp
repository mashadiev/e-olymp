#include <iostream>

int main()
{
    double n, k, i;
    std::cin >> n >> k;

    n = n / k;

    for (i = 0; n > 1; i++)
    {
        n = n / k;
    }

    std::cout << i;

    return 0;
}
