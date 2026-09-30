#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text,in,ans="";
    getline(cin,text);
    stringstream tex(text);
    while(tex >> in) if(isupper(in[0])) ans += in[0];
    cout << ans;
}