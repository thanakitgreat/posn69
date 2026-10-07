#include <bits/stdc++.h>
using namespace std;
typedef long long L;

void stars(L n) {
    if (n == 0) return;
    stars(n-1);
    for (L i = 0; i < n; i++) cout << "*";
    cout << endl;
}

int main() {
    L n; cin >> n;
    stars(n);
}
