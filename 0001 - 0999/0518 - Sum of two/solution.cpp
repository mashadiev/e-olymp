#include <iostream>

int main()
{
    int a, b, n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }

    return 0;
}
