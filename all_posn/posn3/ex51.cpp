#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    if(!(cin>>a>>b)) return 0;

    static long long c[100005], d[100005], e[100005];
    d[0] = 0;
    for(int i=1;i<=a;i++){
        cin>>c[i];
        d[i] = d[i-1] + c[i];
    }

    long long INF = 1LL<<60;
    for(int i=0;i<b;i++) e[i] = INF;
    e[0] = 0;

    long long g = -INF;
    for(int i=1;i<=a;i++){
        int r = i % b;
        if(e[r] != INF) g = max(g, d[i] - e[r]);
        if(d[i] < e[r]) e[r] = d[i];
    }

    cout << g << "\n";
    return 0;
}
