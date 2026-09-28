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

void Y(L a,L b,L c,L d, L e){
    if(a-d >= 0 && b-e >= 0){
        cout << "YES" << "\n";
    }else{
        if(a-d >= 0 && b-e < 0){
            if (b-e+c >= 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }else if(a-d < 0 && b-e >= 0){
            if (a-d+c >= 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }else if(a-d < 0 && b-e < 0){
            if(a-d+b-e+c >= 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c,d,e,f;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c >> d >> e >> f;
        Y(b,c,d,e,f);
    }
}