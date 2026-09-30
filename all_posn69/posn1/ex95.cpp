#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L lcm(L a,L b){
    if(b == 0) return 1;
    return a*lcm(a,b-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L n1,n2; cin >> n1 >> n2;
    cout << lcm(n1,n2);
}