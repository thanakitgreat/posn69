#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

struct times {
    L s,e;
};

B checkopen(L a,L b,L c){
    if(a <= b && b <= c) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L store,test,start,end,time;
    vector<times> stores;
    vector<L> ans;
    cin >> store >> test;
    vector<L> query(test,0);
    for(L i = 0 ; i < store ; i++){
        cin >> start >> end;
        stores.push_back({start,end});
    }
    for(L i = 0 ; i < test ; i++){
        cin >> time;
        ans.push_back(time);
    }
    for(L i = 0 ; i < test ; i++){
        for(L j = 0 ; j < store ; j++){
            if(checkopen(stores[j].s,ans[i],stores[j].e)){
                query[i]++;
            }
        }
    }
    for(L i : query) cout << i << " ";
}