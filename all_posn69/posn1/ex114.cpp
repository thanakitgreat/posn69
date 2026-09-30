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

    S text; cin >> text;
    L minL = text.length();
    for(L i = text.length()/2+1 ; i >= 1 ; i--){
        if(text.length()%i == 0){
            S word = text.substr(0,i);
            B stat = true;
            for(L j = 0 ; j < text.length() ; j += i){
                if(word != text.substr(j,i)) {stat = false; break;}
            }
            if(stat) minL = min(minL,i);
        }
    }
    cout << "[" << text.substr(0,minL) << " , " <<  text.length()/minL << "]";
}