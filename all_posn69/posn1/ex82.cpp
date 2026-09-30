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
    
    S text,ans="";
    cin >> text;
    for(L i = 0 ; i < text.length() ; i++){
        if(text[i] != '%') ans += text[i];
        else{
            C j = (char)stoul(text.substr(i+1,2),nullptr,16);
            ans += j;
            i += 2;
        }
    }
    cout << ans;
}