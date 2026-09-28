#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    C stat;
    L num;
    D price,sum = 0;
    cin >> stat >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> price;
        sum += price;
    }
    if(stat == 'Y'){
        sum *= 0.95;
    }else if(stat == 'N'){
        if(sum >= 500) sum *= 0.97;
    }
    cout << fixed << setprecision(2) << sum;
}