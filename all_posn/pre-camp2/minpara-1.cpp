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

    L xA, yA, xB, yB;
    cin >> xA >> yA >> xB >> yB;

    L ABx = xB - xA;
    L ABy = yB - yA;

    D min_g1 = 1e18, min_g2 = 1e18;
    B has_g1 = false, has_g2 = false;

    for (int i = 0; i < N; i++) {
        L x, y;
        cin >> x >> y;

        L cross = ABx * (y - yA) - ABy * (x - xA);
        D dist = hypot((D)(x - xA), (D)(y - yA)) + hypot((D)(x - xB), (D)(y - yB));

        if (cross > 0) {
            has_g1 = true;
            min_g1 = min(min_g1, dist);
        } else if (cross < 0) {
            has_g2 = true;
            min_g2 = min(min_g2, dist);
        }
    }

    if (!has_g1 || !has_g2) {
        cout << "-1\n";
    } else {
        cout << fixed << setprecision(6) << (min_g1 + min_g2) << "\n";
    }

    return 0;
}