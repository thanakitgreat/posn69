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

L dp[1000][1000];
string text;
L LPS(L i,L j){
    if (i >= j){
        return 0;
    }
    if (dp[i][j] != -1){
        return dp[i][j];
    }
    if (text[i] == text[j]){
        dp[i][j] = LPS(i+1 , j-1);
    }else{
        dp[i][j] = 1 + min(LPS(i+1,j),LPS(i,j-1));
    }
    return dp[i][j];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> text;
    L len = text.length();
    memset(dp,-1,sizeof(dp));
    L minDelete = LPS(0,len - 1);
    cout << "Minimum Deletions: " << minDelete << endl;
    cout << "(LPS): " << len - minDelete << endl;

     return 0;
}