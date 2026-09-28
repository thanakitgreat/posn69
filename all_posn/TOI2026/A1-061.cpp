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

L circle(L x,L y){
    return x*x + y*y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L x,y,r;
    cin >> r >> x >> y;
    L r2 = r*r;
    L xy = circle(x,y);
    if(xy > r2){
        cout << "OUT";
    }else if(xy == r2){
        cout << "ON";
    }else{
        cout << "IN";
    }
}

