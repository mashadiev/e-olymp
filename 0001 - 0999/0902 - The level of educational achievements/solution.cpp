#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    if (a == 1 || a == 2 || a == 3)
        std::cout << "Initial";
    else if (a == 4 || a == 5 || a == 6)
        std::cout << "Average";
    else if (a == 7 || a == 8 || a == 9)
        std::cout << "Sufficient";
    else if (a == 10 || a == 11 || a == 12)
        std::cout << "High";

    return 0;
}
