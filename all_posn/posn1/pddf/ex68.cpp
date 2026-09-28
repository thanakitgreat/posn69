#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    map<L,L> sales;
    L total,target,numin;
    cin >> total >> target;
    for(L i = 0 ; i < total ; i++){
        cin >> numin;
        auto it = sales.find(numin);
        if(it != sales.end()){
            sales[numin]++;
        }else{
            sales[numin] = 1;
        }
    }
    for(auto it = sales.begin() ; it != sales.end() ; ++it){
        if(it->second >= target){
            cout << it->first << ": ";
            for(L i = 0 ; i < it->second ; i++){
                cout << "*";
            }
            cout << "\n";
        }
    }

}