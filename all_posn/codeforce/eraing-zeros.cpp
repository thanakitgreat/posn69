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

void Y(S a){
    L b = a.length();
    L c = 0,d,f;
    for(L i = 0 ; i < b ; i++){
        if (a[i] == '1'){
            d = i;
            break;
        }
    }
    for(L i = b-1 ; i >= 0 ; i--){
        if(a[i] == '1'){
            f = i;
            break;
        }
    }
    for(L i = d+1 ; i < f ; i++){
        if(a[i] == '0'){
            c++;
        }
    }
    cout << c << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    S b;
    cin >> a;
    if (a < 1 || a > 100){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        Y(b);
    }
    return 0;
}