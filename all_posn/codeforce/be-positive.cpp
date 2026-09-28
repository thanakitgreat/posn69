#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

void Y(L a){
    L b,c = 0,d = 0,e = 0;
    for(L i = 0 ; i < a ; i++){
        cin >> b;
        if(b == -1){
            c++;
        }else if(b == 0){
            d++;
        }
    }
    if (c%2 == 1) e += 2;
    e += d;
    cout << e << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        Y(b);
    }
}