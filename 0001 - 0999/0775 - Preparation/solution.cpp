#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<int> mssv(a);

    for (int i = 0; i < a; i++)
        std::cin >> mssv[i];

    int x = b * c;

    std::sort(mssv.begin(), mssv.end(), std::greater<int>());

    int total = 0, k = 0;

    for (int m : mssv)
    {
        total += m;
        k++;

        if (total >= x)
            break;
    }

    std::cout << k;

    return 0;
}
