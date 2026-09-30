#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

const S big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",sma = "abcdefghijklmnopqrstuvwxyz";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; cin >> text;
    vector<pair<L,L>> lett;
    for(C l : text){
        L i = l;
        auto j = find_if(lett.begin(),lett.end(), [i](const auto& k) {return k.second == i;});
        if(j == lett.end()) lett.push_back({1,i-97+26});
        else lett[j-lett.begin()].first++;
    }
    sort(lett.begin(),lett.end());
    for(L i = lett.size()-1 ; i >= 0 ; i--){
        for(L j = 0 ; j < lett[i].first ; j++) cout << sma[lett[i].second];
    }
}