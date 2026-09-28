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

L frac(L num){
    L ans = 1;
    if(num > 0){
        return ans * num * frac(num - 1);
    }else{
        return ans;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    cin >> num;
    if(num >= 0){
        cout << frac(num);
    }else{
        cout << "Factorial is not defined for negative numbers.";
    }
}