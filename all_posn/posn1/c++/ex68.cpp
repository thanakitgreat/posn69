#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    vector<int> d(101, 0);
    for (int e = 0; e < a; e++) {
        cin >> c;
        d[c]++;
    }
    for (int e = 1; e <= 100; e++) {
        if (d[e] >= b) {
            cout << e << ": ";
            for (int f = 0; f < d[e]; f++) cout << "*";
            cout << endl;
        }
    }
}
