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

    int N;
    if (!(cin >> N)) return 0;

    L xr, yr;
    cin >> xr >> yr;

    int ans = -1;
    for (int i = 1; i <= N; i++) {
        L x, y;
        cin >> x >> y;
        if (x % 2 == 0 && y % 2 == 0) {
            L dist_sq = (x - xr) * (x - xr) + (y - yr) * (y - yr);
            if (dist_sq <= 100) {
                ans = i;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}