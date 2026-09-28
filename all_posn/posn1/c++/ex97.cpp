#include <bits/stdc++.h>
using namespace std;

void d(int e, char c, char b, char a) {
    if (e == 1) {
        cout << "Move crystal ball 1 from tower " << c << " to tower " << b << endl;
        return;
    }
    d(e-1, c, a, b);
    cout << "Move crystal ball " << e << " from tower " << c << " to tower " << b << endl;
    d(e-1, a, b, c);
}

int main() {
    int e;
    cin >> e;
    d(e, 'A', 'C', 'B');
}
