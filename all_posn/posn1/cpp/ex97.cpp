#include <bits/stdc++.h>
using namespace std;

void d(int e, char a, char b, char c) {
    if (e == 1) {
        cout << "Move crystal ball 1 from tower " << a << " to tower " << b << endl;
        return;
    }
    d(e-1, a, c, b);
    cout << "Move crystal ball " << e << " from tower " << a << " to tower " << b << endl;
    d(e-1, c, b, a);
}

int main() {
    int e;
    cin >> e;
    d(e, 'A', 'C', 'B');
}
