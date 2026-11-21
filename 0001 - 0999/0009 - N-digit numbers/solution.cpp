#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int N;
long long total_count = 0;
std::string smallest_num = "";
long long fact[15];

void solve(
    int pos,
    int min_digit,
    long long current_sum,
    long long current_prod,
    std::vector<int>& counts,
    std::string& current_str
) {
    if (pos == N) {
        if (current_sum == current_prod) {
            long long ways = fact[N];

            for (int d = 1; d <= 9; ++d) {
                ways /= fact[counts[d]];
            }

            total_count += ways;

            if (smallest_num.empty() || current_str < smallest_num) {
                smallest_num = current_str;
            }
        }

        return;
    }

    int rem = N - pos;

    for (int d = min_digit; d <= 9; ++d) {
        if (d > 1) {
            long long min_possible_sum = current_sum + (long long)d * rem;
            long long min_possible_prod = current_prod * d;

            if (min_possible_prod > current_sum + 9LL * rem) {
                break;
            }
        }

        counts[d]++;
        current_str.push_back('0' + d);

        solve(
            pos + 1,
            d,
            current_sum + d,
            current_prod * d,
            counts,
            current_str
        );

        current_str.pop_back();
        counts[d]--;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (!(std::cin >> N)) {
        return 0;
    }

    if (N == 1) {
        std::cout << "10 0\n";
        return 0;
    }

    fact[0] = 1;

    for (int i = 1; i <= 12; ++i) {
        fact[i] = fact[i - 1] * i;
    }

    std::vector<int> counts(10, 0);
    std::string current_str = "";

    solve(0, 1, 0, 1, counts, current_str);

    std::cout << total_count << " " << smallest_num << '\n';

    return 0;
}
