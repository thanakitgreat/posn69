#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L gcd(L a, L b){
    if(a < b) swap(a,b);
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L n1,n2; cin >> n1 >> n2;
    cout << n1*n2/gcd(n1,n2);
}