#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    int n = a.length();
    for (int i = 1; i <= n; i++) {
        if (n % i != 0) {
            continue;
        }
        string c = a.substr(0, i);
        bool b = true;

        for (int j = 0; j < n; j += i) {
            if (a.substr(j, i) != c) {
                b = false;
                break;
            }
        }

        if (b) {
            cout << "[" << c << " , " << n / i << "]";
            return 0;
        }
    }

    cout << "[" << a << " , 1]";
}