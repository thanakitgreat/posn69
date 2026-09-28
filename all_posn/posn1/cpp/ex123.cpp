#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, f;
    cin >> a >> b >> c >> d >> f;
    
    vector<int> e(a);
    for (int i = 0; i < a; i++) {
        cin >> e[i];
    }
    
    int g = 0;
    double h = 0.0;
    
    for (int i = 0; i < a; i++) {
        for (int j = i; j < a; j++) {
            int o = j - i + 1;
            if (o < b || o > c) continue;
            
            int l = e[i], p = e[i];
            long long q = 0;
            for (int k = i; k <= j; k++) {
                l = min(l, e[k]);
                p = max(p, e[k]);
                q += e[k];
            }
            
            int s = p - l;
            double r = (double)q / o;
            
            if (s <= d && r <= f) {
                g++;
                h = max(h, r);
            }
        }
    }
    
    cout << g << endl;
    cout << fixed << setprecision(2) << h << endl;
    
    return 0;
}