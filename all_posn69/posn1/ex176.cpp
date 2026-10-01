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
    
    using pp = pair<L,pair<L,L>>;
    vector<pp> order;
    L room,stud,sub,score; cin >> room >> stud >> sub;
    for(L i = 1 ; i <= room ; i++){
        for(L j = 1 ; j <= stud ; j++){
            L sum = 0;
            for(L k = 0 ; k < sub ; k++) {cin >> score; sum += score;}
            order.push_back({sum,{i,j}});
        }
    }
    sort(order.begin(),order.end(), [](const pp& a,const pp& b){
        if(a.first != b.first){
            return a.first > b.first;
        }else{
            if(a.second.first != b.second.first) return a.second.first < b.second.first;
            return a.second.second < b.second.second;
        }
    });
    cout << order[0].second.first << " " << order[0].second.second << " " << order[0].first;
}