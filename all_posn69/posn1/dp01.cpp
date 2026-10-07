bool solveMoonBridge(int n, int k,
                     const long long points[],
                     const char stones[],
                     long long* answer) {
    long long INF = 2e18,
    vector<long long> dp(n + 2,-INF);
    vector<long long> ans(n+2,0); dp[0] = 0;
    for(int i = 1 ; i <= n ; i++) ans[i] = points[i-1];
    for (int i = 1; i <= n + 1; ++i) {
        if (i >= 1 && i <= n && stones[i - 1] == 'x') continue;
        long long max_prev = -INF,temp;
        if(i-k > 0) temp = i-k;
        else temp = 0;
        for (int j = temp; j < i; ++j) {
            if (dp[j] > max_prev) max_prev = dp[j];
        }
        if (max_prev != -INF) dp[i] = max_prev + ans[i];
    }
    if (dp[n + 1] != -INF) {
        *answer = dp[n + 1];
        return true;
    }
    return false;
}