#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

void out(C a, L b){ for(L i=0  ; i<b ; i++) cout << a;}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; cin >> text;
    vector<pair<L,C>> lett;
    for(C i : text){
        auto j = find_if(lett.begin(),lett.end(), [i](const auto& k) {return k.second == i;});
        if(j == lett.end()) lett.push_back({1,i});
        else lett[j-lett.begin()].first++;
    }
    sort(lett.begin(),lett.end(),[](const pair<L,C>& a,const pair<L,C>&b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    for(auto i : lett) out(i.second,i.first);
}