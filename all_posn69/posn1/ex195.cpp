#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef bool B;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; getline(cin,text);
    B stat = true;
    for(L i = 0 ; i < text.length()/2 ; i++){
        if(text[i] != text[text.length()-1-i]){
            stat = false; break;
        }
    }
    if(stat) cout << "palindrome";
    else cout << "no";
}