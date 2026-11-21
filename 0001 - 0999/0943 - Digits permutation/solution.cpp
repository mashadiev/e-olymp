#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1, n2, n3;
    cin >> n;

    if (n > 99 && n < 1000)
    {
        n1 = n / 100;
        n2 = n / 10 % 10;
        n3 = n % 10;

        if (n3 == 0)
            cout << n2 << n1;
        else
            cout << n3 << n2 << n1;
    }

    return 0;
}
