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
    
    L row;
    cin >> row;
    for(L i = 1 ; i <= row ; i++){
        cout << S(i,'*') << "\n";
    }
    return 0;
}