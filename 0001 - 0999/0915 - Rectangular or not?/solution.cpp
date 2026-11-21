#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
