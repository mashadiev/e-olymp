#include <iostream>
#include <string>

int main()
{
    int say = 0;
    std::string s;

    std::cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*')
            say++;
    }

    std::cout << say << '\n';

    return 0;
}
