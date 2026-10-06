#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    L n,m,count = 0,sumN = 0;
    cin >> n >> m;
    vector<bool> stat(n + 1, false);
    for (L i = 1; i <= m; i++) for (L j = i; j <= n; j += i) stat[j] = !stat[j];
    for (L i = 1; i <= n; i++) {
        if (stat[i]) {count++; sumN += i;}
    }
    cout << count << " " << sumN << "\n";
}