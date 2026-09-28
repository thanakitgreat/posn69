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
    
    L num,score = 0;
    C stat;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> stat;
        if(stat == '+') score += 10;
        else if(stat == '-') score -= 5;
    }
    cout << score;
}