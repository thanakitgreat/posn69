#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

void Y(L d) {
    vector<L> a(d);
    for (L i = 0 ; i < d ; ++i) cin >> a[i];
    if (d == 0) {
        cout << 0 << "\n";
        return;
    }
    vector<L> dp(d, 1);
    L b = 1;
    for (L i = 1 ; i < d ; ++i) {
        for (L j = 0 ; j < i ; ++j) {
            if (a[j] <= a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        b = max(b, dp[i]);
    }
    L c = d-b;
    cout << c << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        Y(b);
    }
}