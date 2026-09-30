#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S text,ans = ""; cin >> text;
    if(text.length()/2){
        for(L i = text.length()/2-1 ; i >= 0 ; i--) ans += text[i];
        for(L i = text.length() ; i >= text.length()/2 ; i--) ans += text[i];
    }else{
        for(L i = text.length()/2-1 ; i >= 0 ; i--) ans += text[i];
        ans += text[text.length()/2];
        for(L i = text.length() ; i >= text.length()/2+1 ; i--) ans += text[i];
    }
    cout << ans;
}