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

L expo(L base,L power){
    L ans = 1;
    if(power > 1){
        return ans * base * expo(base,power-1);
    }else{
        return ans * base;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L base,power;
    cin >> base >> power;
    cout << expo(base,power);
}