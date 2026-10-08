#include <bits/stdc++.h>
using namespace std;

typedef long long L;

bool is_possible(L R, int n, int m, const vector<L>& a_sorted, const vector<L>& b) {
    if (n == 0) return true;


    for (int j = 0; j <= m - n; ++j) {
        vector<L> current_b;
        for (int k = 0; k < n; ++k) {
            current_b.push_back(b[j + k]);
        }
        sort(current_b.begin(), current_b.end());

        bool valid_window = true;
        for (int k = 0; k < n; ++k) {
            if (abs(a_sorted[k] - current_b[k]) > R) {
                valid_window = false;
                break;
            }
        }
        if (valid_window) {
            return true;
        }
    }
    return false;
}

pair<L, L> solve_A() {
    int n, m;
    cin >> n >> m;

    vector<L> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<L> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];

    vector<L> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end());

    L low = 0;
    L high = 2e9;
    L R_min = high;

    while (low <= high) {
        L mid = low + (high - low) / 2;
        if (is_possible(mid, n, m, a_sorted, b)) {
            R_min = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    L count = 0;
    for (int j = 0; j <= m - n; ++j) {
        vector<L> current_b;
        for (int k = 0; k < n; ++k) {
            current_b.push_back(b[j + k]);
        }
        sort(current_b.begin(), current_b.end());

        bool valid_window = true;
        for (int k = 0; k < n; ++k) {
            if (abs(a_sorted[k] - current_b[k]) > R_min) {
                valid_window = false;
                break;
            }
        }
        if (valid_window) {
            count++;
        }
    }

    return {R_min, count};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pair<L, L> result = solve_A();
    cout << result.first << " " << result.second << "\n";
    return 0;
 }