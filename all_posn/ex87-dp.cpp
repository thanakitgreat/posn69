#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int lps(const string& s, vector<vector<int>>& dp, int i, int j) {
    if (i > j) return 0;
    if (i == j) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    if (s[i] == s[j])
        return dp[i][j] = 2 + lps(s, dp, i + 1, j - 1);
    return dp[i][j] = max(lps(s, dp, i + 1, j), lps(s, dp, i, j - 1));
}

void collect(const string& s, vector<vector<int>>& dp, int i, int j, string curr, set<string>& res) {
    if (i > j) {
        res.insert(curr);
        return;
    }
    if (i == j) {
        string tmp = curr;
        tmp.insert(curr.size() / 2, 1, s[i]);
        res.insert(tmp);
        return;
    }
    if (s[i] == s[j]) {
        string next = curr;
        next.insert(next.size() / 2, 1, s[i]);
        next.insert(next.size() / 2, 1, s[j]);
        collect(s, dp, i + 1, j - 1, next, res);
    } else {
        if (dp[i + 1][j] >= dp[i][j - 1])
            collect(s, dp, i + 1, j, curr, res);
        if (dp[i + 1][j] <= dp[i][j - 1])
            collect(s, dp, i, j - 1, curr, res);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    int n = S.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    int lps_len = lps(S, dp, 0, n - 1);
    int min_del = n - lps_len;
    cout << "Minimum Deletions: " << min_del << endl;
    cout << "(LPS): " << lps_len << endl;

    set<string> palins;
    collect(S, dp, 0, n - 1, "", palins);

    int idx = 1;
    for (const auto& p : palins) {
        cout << "[" << idx++ << "]: " << p << endl;
    }
    return 0;
}