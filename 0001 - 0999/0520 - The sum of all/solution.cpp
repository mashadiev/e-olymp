#include <iostream>

int main()
{
    int n;
    long long s = 0;

    while (std::cin >> n)
    {
        s += n;
    }

    std::cout << s << '\n';

    return 0;
}
