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
    
    L test,real;
    cin >> test >> real;
    if(test < 1 || test > 6 || real > 6 || real < 1){
        cout << "Invalid";
    }else{
        if(test == real) cout << "Correct!";
        else cout << "Wrong!";
    }
}