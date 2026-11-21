#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int k;
        std::cin >> k;

        if (k % 3 == 1)
            std::cout << "VGC\n";
        else if (k % 3 == 2)
            std::cout << "CVG\n";
        else
            std::cout << "GCV\n";
    }

    return 0;
}
