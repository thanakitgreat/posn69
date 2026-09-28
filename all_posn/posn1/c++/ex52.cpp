#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    static long long c[100005], d[100005], e[100005], f[100005];
    for (int i=1;i<=a;i++) cin >> c[i];

    long long g = -1000000000000000000LL; // -1e18

    for (int i=0;i<=a;i++) d[i]=g;
    d[0]=0;

    for (int k=1;k<=b;k++) {
        for (int i=0;i<=a;i++) { e[i]=g; f[i]=g; }
        for (int i=1;i<=a;i++) {
            long long x = (f[i-1]==g?g:f[i-1]+c[i]);
            long long y = (d[i-1]==g?g:d[i-1]+c[i]);
            f[i]=max(x,y);
            e[i]=max(e[i-1],f[i]);
        }
        for (int i=0;i<=a;i++) d[i]=e[i];
    }

    cout << d[a];
}
