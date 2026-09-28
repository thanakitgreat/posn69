#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> wt(n+1), val(n+1);
    for (int i = 1; i <= n; i++) cin >> wt[i] >> val[i];

    vector<vector<int>> dp(n+1, vector<int>(w+1, 0));

    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= w; j++)
            if (wt[i] <= j)
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i]] + val[i]);
            else dp[i][j] = dp[i-1][j];

    int res = dp[n][w], W = w;
    vector<int> chosen;
    for (int i = n; i >= 1; i--) {
        if (dp[i][W] != dp[i-1][W]) {
            chosen.push_back(i);
            W -= wt[i];
        }
    }
    reverse(chosen.begin(), chosen.end());

    int sumW = 0;
    for (int i : chosen) sumW += wt[i];

    cout << "weight " << sumW << "/" << w
         << " value " << res << " (";
    for (int i = 0; i < chosen.size(); i++) {
        cout << chosen[i];
        if (i < chosen.size()-1) cout << " ";
    }
    cout << ")" << endl;
}
