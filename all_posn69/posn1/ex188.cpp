#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    using pp = pair<L,pair<L,pair<L,L>>>;
    vector<pp> order;
    L rob,score,track,time,id; cin >> rob >> track;
    for(L i = 1 ; i <= rob ; i++){
       cin >> id >> score >> time;
       order.push_back({score,{time,{i,id}}});
    }
    sort(order.begin(),order.end(), [](const pp& a,const pp& b){
        if(a.first != b.first){
            return a.first > b.first;
        }else{
            if(a.second.first != b.second.first){
                return a.second.first < b.second.first;
                else
            return a.second.second < b.second.second;
        }
    });
    cout << ;
}