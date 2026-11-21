#include <iostream>
#include <vector>

void arrayy(int a)
{
    std::vector<std::vector<int>> arr(a, std::vector<int>(a));
    int se = 1;

    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < a; j++)
            {
                arr[i][j] = se;
                se++;
            }
        }
        else
        {
            for (int j = a - 1; j >= 0; j--)
            {
                arr[i][j] = se;
                se++;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            std::cout << arr[i][j] << " ";
        }

        std::cout << '\n';
    }
}

int main()
{
    int a;
    std::cin >> a;

    arrayy(a);

    return 0;
}
