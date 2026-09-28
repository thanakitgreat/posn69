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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    D radius,height,glue;
    cin >> radius >> height >> glue;
    cout << fixed << setprecision(2) << radius*2.00 + height 
    << " " << 3.14*radius*2 + glue;
}