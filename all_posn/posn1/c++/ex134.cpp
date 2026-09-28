#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double e = a * 9.81 * (b * 1000.0);
    double f = 0.5 * c * d * d;

    cout << fixed << setprecision(2);

    if (abs(e - f) < 0.1) {
        cout << "=" << endl;
    } else if (e > f) {
        cout << "Brr Brr Patapim " << e - f << " Joules" << endl;
    } else {
        cout << "Tung Tung Tung Sahur " << f - e << " Joules" << endl;
    }

    return 0;
}