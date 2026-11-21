#include <iostream>

int main()
{
    long long n, ans = 0;
    std::cin >> n;

    while (n)
    {
        if (n % 2 == 1)
            ans++;

        n = n / 2;
    }

    std::cout << ans << '\n';

    return 0;
}
