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

void Y(L a,L b){
    L c,f,g;
    vector<L> d;
    for(L i = 0 ; i < a ; i++){
        cin >> c;
        d.push_back(c);
    }
    for(L i = 0 ; i < a ; i++){
        if (d[i] == 1){
            f = i;
            break;
        }
    }
    for(L i = a-1 ; i >= 0 ; i--){
        if (d[i] == 1){
            g = i;
            break;
        }
    }
    if(g-f+1 <= b){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 1000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(b,c);
    }
}