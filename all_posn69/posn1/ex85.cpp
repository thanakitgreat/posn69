#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

S text; L len;
vector<vector<L>> palin(len,vector<L>(len));

L del(L a, L b){
    if(a >= b) return 0;
    if(palin[a][b] != -1) return palin[a][b];
    if(text[a] == text[b]) palin[a][b] = del(a+1,b-1);
    else palin[a][b] = 1 + min(del(a+1,b),del(a,b-1));
    return palin[a][b];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> text; len = text.length();
    palin.assign(len,vector<L>(len,-1));
    L ans = del(0,len-1);
    cout << "Minimum Deletions: " << ans << "\n";
    cout << "Length of Palindromic: " << len-ans;
}