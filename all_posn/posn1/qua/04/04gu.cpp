#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d = min({i, j, n - 1 - i, n - 1 - j});
            cout << (d + 1) * m << " ";
        }
        cout << "\n";
    }
}