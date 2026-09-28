#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

void Z(L a){
    L c = 1;
    for (L i = 1 ; i <= a ; i++){
        c *= i;
    }
    cout << c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L b,c;
        cin >> b >> c;
        if(b <= c){
            Z(b);
        }else{
            Z(c);
        }
    }