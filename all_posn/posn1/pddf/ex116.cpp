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

L fract(L num){
    L total  = 1;
    for(L i = 1 ; i <= num ; i++){
        total *= i;
    }
    return total;
}

L pascal(L n1,L n2){
    return fract(n1)/fract(n2)/fract(n1-n2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    cin >> num;
    for(L i = num-1 ; i >= 0 ; i--){
        for(L j = 0 ; j <= i ; j++){
            cout << pascal(i,j) << " ";
        }
        cout << "\n";
    }
    
}