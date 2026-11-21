#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>

void readNumber(const std::string& s, std::vector<int>& a) {
    for (int i = (int)s.length(); i > 0; i -= 9) {
        if (i < 9) {
            a.push_back(atoi(s.substr(0, i).c_str()));
        } else {
            a.push_back(atoi(s.substr(i - 9, 9).c_str()));
        }
    }

    while (a.size() > 1 && a.back() == 0) {
        a.pop_back();
    }
}

void multiplySmall(std::vector<int>& a, int& b) {
    int carry = 0;
    const int base = 1000 * 1000 * 1000;

    for (size_t i = 0; i < a.size() || carry; ++i) {
        if (i == a.size()) {
            a.push_back(0);
        }

        long long current = carry + a[i] * 1ll * b;

        a[i] = int(current % base);
        carry = int(current / base);
    }

    while (a.size() > 1 && a.back() == 0) {
        a.pop_back();
    }
}

void printNumber(std::vector<int>& a) {
    printf("%d", a.empty() ? 0 : a.back());

    for (int i = (int)a.size() - 2; i >= 0; --i) {
        printf("%09d", a[i]);
    }
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int gc = gcd(v[i], v[j]);
            v[j] /= gc;
        }
    }

    std::vector<int> answer;
    std::string s = "1";

    readNumber(s, answer);

    for (int i = 0; i < n; i++) {
        multiplySmall(answer, v[i]);
    }

    printNumber(answer);

    return 0;
}
