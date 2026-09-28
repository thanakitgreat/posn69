#include <bits/stdc++.h>
using namespace std;

void a(int n) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    if (n == 0) return;
    int r = n % 16;
    a(n / 16);
    if (r < 10) cout << r;
    else cout << char('A' + (r - 10));
}

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    else a(n);
    cout << endl;
}
