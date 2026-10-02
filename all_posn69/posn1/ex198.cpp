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
    
    L num; cin >> num;
    S text; vector<pair<L,S>> order;
    for(L i=0 ; i<num ; i++){
        cin >> text;
        order.push_back({text.length(),text});

    }
    sort(order.begin(),order.end());
    for(auto i : order) cout << i.second << "\n";
}