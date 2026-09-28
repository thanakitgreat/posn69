#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b[105];
    for (int c = 0; c < a; c++) cin >> b[c];
    int d = 0;
    for (int c = 0; c < a; c++) {
        for (int e = c + 1; e < a; e++) {
            bool f = true;
            int m = min(b[c], b[e]);
            for (int g = c + 1; g < e; g++) {
                if (b[g] >= m) {
                    f = false;
                    break;
                }
            }
            if (f) d++;
        }
    }
    cout << d << endl;
}