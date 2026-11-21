#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (!(std::cin >> n)) {
        return 0;
    }

    std::vector<int> d(n), c(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> d[i] >> c[i];
    }

    int totalMasks = 1 << n;
    std::vector<int> dp(totalMasks, 0);

    for (int mask = 0; mask < totalMasks; ++mask) {
        int day = __builtin_popcount(mask);

        for (int i = 0; i < n; ++i) {
            if (!(mask & (1 << i))) {
                int remainingDays = std::max(0, d[i] - day);
                int gain = remainingDays * c[i];
                int nextMask = mask | (1 << i);

                dp[nextMask] = std::max(
                    dp[nextMask],
                    dp[mask] + gain
                );
            }
        }
    }

    std::cout << dp[totalMasks - 1] << '\n';

    return 0;
}
