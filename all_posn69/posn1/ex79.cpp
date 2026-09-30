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
    
    S tex,text=""; getline(cin,tex);
    for(C i : tex) {
        if(isdigit(i)) text += i;
        else if(isalpha(i)){
            if(isupper(i)) text += tolower(i);
            else text += i;
        }
    }
    B stat = true;
    for(L i = 0 ; i < text.length()/2 ; i++){
        if(text[i] != text[text.length()-1-i]){
            stat = false; break;
        }
    }
    if(stat) cout << "YES";
    else cout << "NO";
}