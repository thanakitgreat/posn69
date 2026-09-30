#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

L frac(L a){
    L sum = 1;
    for(L i = 1 ; i <= a ; i++) sum *= i;
    return sum;
}

L pnr(L a,L b){
    return frac(a)/frac(a-b)/frac(b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num; cin >> num;
    for(L i = num-1 ; i > 0 ; i--){
        for(L j = 0 ; j <= i ; j++){
            cout << pnr(i,j) << " ";
        }
        cout << "\n";
    }
    cout << 1;
}