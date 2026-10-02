#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    if(h1*3600+m1*60+s1 < h2*3600+m2*60+s2) cout << "Team 1 performed better";
    else if(h1*3600+m1*60+s1 > h2*3600+m2*60+s2) cout << "Team 2 performed better";
    else cout << "Both teams performed equally";
;}