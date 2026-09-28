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
    
    L num,minNum = INF,maxNum = -INF;
    D sum = 0,day;
    cin >> day;
    for(L i = 0  ; i < day ; i++){
        cin >> num;
        sum += num;
        minNum = min(minNum,num);
        maxNum = max(maxNum,num);
    }
    cout << sum << "\n" << maxNum << "\n" << minNum << "\n"
    << fixed << setprecision(1) << sum/day;
}