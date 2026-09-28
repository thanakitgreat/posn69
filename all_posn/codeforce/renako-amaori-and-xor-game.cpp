#include <iostream>
#include <string>
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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 20000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        L d = 0,e = 0, f = 0;
        for (L j = 0 ; j < 2*b ; j++){
            cin >> c;
            if (j > b-1){
                if (c == 1) e++;
            }else{
                if (c == 1) f++;
            }
        }
        if (e > f && e%2 != f%2){
            cout << "Ajisai" << "\n";
        }else if (f > e && e%2 != f%2){
            cout << "Mai" << "\n";
        }else if (e%2 == f%2){
            cout << "Tie" << "\n";
        }
    }
}