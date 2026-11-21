#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int first_digit = number / 1000;
    int last_digit = number % 10;

    cout << first_digit + last_digit;

    return 0;
}
