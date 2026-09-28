#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    int d = 0;
    cin >> a;

    for (int i = 0 ; i < a ; i++){
        cin >> b;
        int *c = &b;
        d += *c;
    }

    cout << d;
}