#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text,ans; cin >> text;
    L cur = 1;
    for(L i = 0 ; i < text.length() ; i++){
        if(i != text.length()-1){
            if(text[i] == text[i+1]) cur++;
            else{
                ans += to_string(cur);
                ans += text[i];
                cur = 1;
            }
        }else{
            ans += to_string(cur);
            ans += text[i];
            cur = 1;
        }
    }
    cout << ans;
}