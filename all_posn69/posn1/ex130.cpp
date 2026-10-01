#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;\

D dis(L a,L b){ return sqrt(a*a+b*b);}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,xs,ys,xn,yn,xm,ym; cin >> num >> xs >> ys;
    vector<pair<D,L>> dist;
    for(L i = 1 ; i <= num ; i++){
        cin >> xn >> yn >> xm >> ym;
        L finx = xn+xm,finy = yn+ym;
        dist.push_back({dis(abs(finx-xs),abs(finy-ys)),i});
    }
    vector<pair<D,L>> ans = dist;
    sort(dist.begin(),dist.end());
    cout << fixed << setprecision(2);
    for(auto i : ans) cout << "Satellite " << i.second << ": " << i.first << "\n";
    cout << "Best Satellite: ";
    for(auto i : dist){
        if(i.first == dist[0].first) cout << i.second << ", ";
        else break;
    }
    cout << "Distance: " << dist[0].first;

}