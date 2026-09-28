#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    static long long e[55][55], f[55][55];
    for(int i=1;i<=a;i++)for(int j=1;j<=b;j++) cin>>e[i][j];

    for(int i=1;i<=a;i++)for(int j=1;j<=b;j++)
        f[i][j]=e[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];

    long long g=-1e18;
    for(int i=1;i<=a-c+1;i++)for(int j=1;j<=b-d+1;j++){
        int x=i+c-1,y=j+d-1;
        long long h=f[x][y]-f[i-1][y]-f[x][j-1]+f[i-1][j-1];
        g=max(g,h);
    }

    cout<<g;
}
