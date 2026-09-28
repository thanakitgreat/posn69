#include <bits/stdc++.h>
using namespace std;

void stars(int n) {
    if (n == 0) return;
    stars(n-1);
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    stars(n);
}
