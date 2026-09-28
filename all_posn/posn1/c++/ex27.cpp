#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int e = 0;
    for (int b = 2; b <= a; b++) {
        bool f = true;
        for (int c = 2; c * c <= b; c++) {
            if (b % c == 0) {
                f = false;
                break;
            }
        }
        if (f) e += b;
    }
    cout << e;
}
