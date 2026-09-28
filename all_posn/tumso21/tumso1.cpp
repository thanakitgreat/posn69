#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_possible(ll R, int n, int m, const vector<ll>& a_sorted, const vector<ll>& b) {
    if (n == 0) return true;


    for (int j = 0; j <= m - n; ++j) {
        vector<ll> current_b;
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

pair<ll, ll> solve_A() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<ll> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];

    vector<ll> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end());

    ll low = 0;
    ll high = 2e9;
    ll R_min = high;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (is_possible(mid, n, m, a_sorted, b)) {
            R_min = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    ll count = 0;
    for (int j = 0; j <= m - n; ++j) {
        vector<ll> current_b;
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
    pair<ll, ll> result = solve_A();
    cout << result.first << " " << result.second << "\n";
    return 0;
 }