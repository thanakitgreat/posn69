long long maxProfit(int n, int W,
                    const int weights[],
                    const long long values[]) {
    long long dp[W + 1] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = W; j >= weights[i]; j--) {
            if(dp[j] < dp[j - weights[i]] + values[i]) dp[j] = dp[j - weights[i]] + values[i];
        }
    }

    return dp[W];
}