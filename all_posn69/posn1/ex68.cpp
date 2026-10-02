#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

void printa(L a){
    for(L i = 0 ; i < a ; i++) cout << "*";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,lim,code;
    vector<pair<L,L>> sale;
    cin >> num >> lim;
    for(L i = 0 ; i < num ; i++){
        cin >> code;
        auto it = find_if(sale.begin(),sale.end(), [code](const auto& j){
            return j.second == code; 
        });
        if(it == sale.end()) sale.push_back({1,code});
        else sale[it-sale.begin()].first++;
    }
    sort(sale.begin(),sale.end(),[](const pair<L,L>& a,const pair<L,L>& b){
        return a.second < b.second;
    });
    for(auto i : sale){
        if(i.first >= lim){
            cout << i.second << ": ";
            printa(i.first);
        }
    }

}