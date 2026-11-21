#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, f;
    cin >> a;

    b = a / 100;
    c = a % 10;

    f = b * 10 + c;

    cout << f;

    return 0;
}
