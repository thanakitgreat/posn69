#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    L num; cin >> num;
    vector<pair<D,L>> dist;
    D x1,y1,z1,x,y,z; cin >> x1 >> y1 >> z1;
    for(L i=0 ; i<num ; i++){
        cin >> x >> y >> z;
        D far = sqrt(pow((x1-x),2)+pow((y1-y),2)+pow((z1-z),2));
        dist.push_back({far,i});
    }
    sort(dist.begin(),dist.end());
    cout << "Closest Debris Index: " << dist[0].second << "\n";
    cout << fixed << setprecision(2);
    cout << "Minimum Distance: " << dist[0].first << " km" << "\n";
    if(dist[0].first > 5.0) cout << "Status: Safe";
    else cout << "CRITICAL WARNING: High Collision Risk!";
}