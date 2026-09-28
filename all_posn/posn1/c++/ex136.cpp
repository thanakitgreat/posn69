#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    vector<vector<int>> c(a, vector<int>(b));
    vector<int> d;
    double e = 0.0;
    int f = INT_MIN;

    for (int g = 0; g < a; ++g) {
        for (int h = 0; h < b; ++h) {
            cin >> c[g][h];
            d.push_back(c[g][h]);
            e += c[g][h];
            if (c[g][h] > f) {
                f = c[g][h];
            }
        }
    }

    double i = e / (a * b);
    
    cout << fixed << setprecision(2);
    cout << "Average Power: " << i << endl;

    sort(d.begin(), d.end());
    
    double j;
    int k = a * b;
    if (k % 2 != 0) {
        j = d[k / 2];
    } else {
        j = (d[k / 2 - 1] + d[k / 2]) / 2.0;
    }
    cout << "Median Power : " << j << endl;

    cout << "Values > avg : ";
    for (int l : d) {
        if (l > i) {
            cout << l << " ";
        }
    }
    cout << endl;

    cout << "Type Map:" << endl;
    vector<vector<char>> m(a, vector<char>(b));
    for(int n = 0; n < a; ++n) {
        for(int o = 0; o < b; ++o) {
            if (n == 0 || n == a - 1 || o == 0 || o == b - 1) {
                m[n][o] = '0';
            } else {
                int p = c[n][o];
                if (p == f) {
                    m[n][o] = 'h';
                } else if (p > 0) {
                    m[n][o] = 'p';
                } else if (p == 0) {
                    m[n][o] = 'z';
                } else {
                    m[n][o] = 'n';
                }
            }
        }
    }

    for (int n = 0; n < a; ++n) {
        for (int o = 0; o < b; ++o) {
            if (o != b-1){
                cout << m[n][o] << " ";
            }else{
                cout << m[n][o];
            }
        }
        cout << endl;
    }

    return 0;
}