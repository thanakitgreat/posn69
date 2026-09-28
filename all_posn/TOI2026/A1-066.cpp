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
    
    L jump,far;
    cin >> jump >> far;
    L gone = 0,count = 0;
    while(jump > 0 && gone < far){
        gone += jump;
        count++;
        jump -= 2;
    }
    if(gone < far){
        cout << -1;
    }else{
        cout << count;
    }
}