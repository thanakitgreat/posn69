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

L mixColor(L c1,L c2){
    return (c1 + c2)/2;
}

void mixRGB(L r1,L g1,L b1,L r2,L g2,L b2){
    cout << mixColor(r1,r2) << " " 
    << mixColor(g1,g2) << " " << mixColor(b1,b2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L r1,g1,b1,r2,g2,b2; 
    cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
    mixRGB(r1,g1,b1,r2,g2,b2);
}