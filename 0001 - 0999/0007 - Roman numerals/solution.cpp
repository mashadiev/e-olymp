#include <bits/stdc++.h>

int main() {
    std::string s;
    long long a = 0, b, c, d, e;

    std::getline(std::cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            b = a;
            a = 0;
            i++;
        }

        if (s[i] == 'I' && s[i + 1] != 'V' && s[i + 1] != 'X') {
            a++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'V') {
            a += 4;
            i++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'X') {
            a += 9;
            i++;
        }
        else if (s[i] == 'V') {
            a += 5;
        }
        else if (s[i] == 'X' && s[i + 1] != 'L' && s[i + 1] != 'C') {
            a += 10;
        }
        else if (s[i] == 'X' && s[i + 1] == 'L') {
            a += 40;
            i++;
        }
        else if (s[i] == 'X' && s[i + 1] == 'C') {
            a += 90;
            i++;
        }
        else if (s[i] == 'L') {
            a += 50;
        }
        else if (s[i] == 'C' && s[i + 1] != 'D' && s[i + 1] != 'M') {
            a += 100;
        }
        else if (s[i] == 'C' && s[i + 1] == 'D') {
            a += 400;
            i++;
        }
        else if (s[i] == 'C' && s[i + 1] == 'M') {
            a += 900;
            i++;
        }
        else if (s[i] == 'D') {
            a += 500;
        }
        else if (s[i] == 'M') {
            a += 1000;
        }
    }

    a = a + b;

    while (a > 0) {
        if (a >= 1000) {
            std::cout << "M";
            a -= 1000;
        }
        else if (a >= 900) {
            std::cout << "CM";
            a -= 900;
        }
        else if (a >= 500) {
            std::cout << "D";
            a -= 500;
        }
        else if (a >= 400) {
            std::cout << "CD";
            a -= 400;
        }
        else if (a >= 100) {
            std::cout << "C";
            a -= 100;
        }
        else if (a >= 90) {
            std::cout << "XC";
            a -= 90;
        }
        else if (a >= 50) {
            std::cout << "L";
            a -= 50;
        }
        else if (a >= 40) {
            std::cout << "XL";
            a -= 40;
        }
        else if (a >= 10) {
            std::cout << "X";
            a -= 10;
        }
        else if (a >= 9) {
            std::cout << "IX";
            a -= 9;
        }
        else if (a >= 5) {
            std::cout << "V";
            a -= 5;
        }
        else if (a >= 4) {
            std::cout << "IV";
            a -= 4;
        }
        else if (a >= 1) {
            std::cout << "I";
            a -= 1;
        }
    }
}
