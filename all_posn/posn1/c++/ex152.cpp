#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    double d = 0;
    cin >> a;
    cout << fixed << setprecision(2);

    for (int i = 0 ; i < a ; i++){
        cin >> b >> c;
        d += 9.81*b*c;
    }

    cout << "Total Gravitational Potential Energy: " << d << " J";
}