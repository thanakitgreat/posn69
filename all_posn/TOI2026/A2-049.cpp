#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef bool B;
typedef double D;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L r1, c1, r2, c2;
    L a[3][3], b[3][3], result[3][3] = {0};
    for (L i = 0; i < 3; ++i)
        for (L j = 0; j < 3; ++j) cin >> a[i][j];
    for (L i = 0; i < 3; ++i)
        for (L j = 0; j < 3; ++j) cin >> b[i][j];
    for (L i = 0; i < 3; ++i) {
        for (L j = 0; j < 3; ++j) {
            for (L k = 0; k < 3; ++k) result[i][j] += a[i][k] * b[k][j];
        }
    }
    for (L i = 0; i < 3; ++i) {
        for (L j = 0; j < 3; ++j) cout << (result[i][j]) % ((1 << 15) + 9) << " ";
        cout << endl;
    }
    return 0;
}