#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    D C_true, C2, V1;

    if (!(cin >> n >> m >> C_true)) return 0;
    cin >> C2 >> V1;

    vector<D> C1(n);
    int best_idx = 0;
    D min_diff = 1e18;

    for (int i = 0; i < n; i++) {
        D sum_v2 = 0;
        for (int j = 0; j < m; j++) {
            D v2;
            cin >> v2;
            sum_v2 += v2;
        }
        D avg_v2 = sum_v2 / m;
        C1[i] = (C2 * avg_v2) / V1;

        D diff = abs(C_true - C1[i]);
        if (diff < min_diff) {
            min_diff = diff;
            best_idx = i;
        }
    }

    cout << fixed << setprecision(3);
    for (int i = 0; i < n; i++) {
        cout << C1[i] << " mol\n";
    }

    if (abs(min_diff) < 1e-7) {
        cout << "ขวดที่ " << (best_idx + 1) << " : =\n";
    } else {
        cout << "ขวดที่ " << (best_idx + 1) << " ผลต่าง : " << min_diff << " mol\n";
    }

    return 0;
}