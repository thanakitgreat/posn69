#include <bits/stdc++.h>
using namespace std;

double a(double b, double c, double d, double e) {
    return sqrt((b - d)*(b - d) + (c - e)*(c - e));
}

int main() {
    int b;
    cin >> b;
    double c, d;
    cin >> c >> d;
    vector<double> e;
    cout << fixed << setprecision(2);
    for (int f = 0; f < b; f++) {
        double g, h, i, j;
        cin >> g >> h >> i >> j;
        double k = g + i, l = h + j;
        double m = a(c, d, k, l);
        e.push_back(m);
        cout << "Satellite " << f + 1 << ": " << m << endl;
    }
    double n = *min_element(e.begin(), e.end());
    vector<int> o;
    for (int f = 0; f < b; f++)
        if (fabs(e[f] - n) < 1e-9) o.push_back(f + 1);
    cout << "Best Satellite: ";
    for (int f = 0; f < o.size(); f++) {
        cout << o[f];
        if (f < o.size() - 1) cout << ", ";
    }
    cout << ", Distance: " << n << "\n";
}
