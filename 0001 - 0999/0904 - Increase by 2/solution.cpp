#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    long long massiv[a];

    for (int i = 0; i < a; i++)
    {
        std::cin >> massiv[i];

        if (massiv[i] >= 0)
            massiv[i] += 2;
    }

    for (int i = 0; i < a; i++)
        std::cout << massiv[i] << " ";

    return 0;
}
