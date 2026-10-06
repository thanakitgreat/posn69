#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef bool B;

L num;
vector<vector<L>> nums, ans;

B solve(L r, L c) {
    if (r == num - 1 && c == num - 1) {
        ans[r][c] = 1;
        return true;
    }
    if (r >= num || c >= num || nums[r][c] == 0) return false;
    ans[r][c] = 1;
    if (solve(r, c + 1)) return true;
    if (solve(r + 1, c)) return true;
    ans[r][c] = 0;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> num;
    nums.assign(num, vector<L>(num)); ans.assign(num, vector<L>(num, 0));
    for (L i = 0; i < num; i++) for (L j = 0; j < num; j++) cin >> nums[i][j];
    if (nums[0][0] == 1 && solve(0, 0)) {
        for (auto i : ans) {
            for (L j : i) cout << j << " ";
            cout << "\n";
        }
    }
    else cout << "No path found\n";
}