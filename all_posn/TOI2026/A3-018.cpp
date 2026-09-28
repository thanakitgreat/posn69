#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L sell,lev;
    cin >> lev >> sell;

    if(lev < 1 or lev > 100 or sell < 0 or sell > 400000) return 0;
    L left = (lev * (lev + 1) * (2* lev + 1) / 6) - sell;
    L sum = 0,row;
    for(L i = lev ; i >= 1 ; i--){
        if(sum >= left){
            row = i;
            break;
        }else{
            sum += i*i;
        }
    }
    cout << lev - row;
}