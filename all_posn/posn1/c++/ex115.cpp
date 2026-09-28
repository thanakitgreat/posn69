#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    if(!(cin>>a>>b)) return 0;
    vector<vector<int>> c(a, vector<int>(b));
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>c[i][j];
    int d; cin>>d;
    vector<int> e(a,0), f(b,0);
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            if(c[i][j]==d){ e[i]++; f[j]++; }
    int g = -1;
    vector<pair<int,int>> h;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int k = e[i] + f[j] - (c[i][j]==d ? 1 : 0);
            if(k>g){ g=k; h.clear(); h.push_back({i+1,j+1}); }
            else if(k==g) h.push_back({i+1,j+1});
        }
    }
    cout<<g<<"\n"<<h.size()<<"\n";
    for(auto &p: h) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
