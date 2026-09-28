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
    vector<L> b;
    L c,d = 0;
    for(L i = 0 ; i < a ; i++){
        cin >> c;
        b.push_back(c);
    }
    sort(b.begin(),b.end());
    for(L i = 0 ; i < a/2 ; i++){
        d += b[a-1-i]-b[i];
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