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
    L b;
    vector<L> c;
    for(L i = 0 ; i < a ; i++){
        cin >> b;
        c.push_back(b);
    }
    L d = -1;
    L e = 0;
    for(L i = 0 ; i < a ; i++){
        e = 0;
        for(L j = i ; j < a ; j++){
            e += c[j];
            e /= (j-i+1);
            if (e > d) d = e;
        }
    }
    cout << d << "\n";
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