#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

void Y(L a,L b){
    S d;
    vector<S> c;
    for(L i = 0 ; i < a ; i++){
        cin >> d;
        c.push_back(d);
    }
    for(L i = 0 ; i < a ; i += b){
        for(L j = 0 ; j < a ; j += b){
            cout << c.at(i)[j];
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(b,c);
    }
}