#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    auto can = [&](double R) {
        int used = 0;
        double cover = -1e18;
        for (int i = 0; i < n; i++) {
            if (a[i] > cover) {
                used++;
                cover = a[i] + 2 * R;
            }
        }
        return used <= k;
    };

    double L = 0, R = 1e9;
    for (int t = 0; t < 60; t++) {
        double M = (L + R) / 2;
        if (can(M)) R = M;
        else L = M;
    }
    cout << fixed << setprecision(6) << R << endl;
}
