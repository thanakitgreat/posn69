#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L sums(L a){
    L in;
    if(a == 0) return 1;
    return a*sums(a-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num; cin >> num;
    if(num > -1) cout << sums(num);
    else cout << "Factorial is not defined for negative numbers.";
}