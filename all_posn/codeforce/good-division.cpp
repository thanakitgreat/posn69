#include <iostream>
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
    for (L i = 0; i < a ; i++){
        L d = 0,e = 0,f = 0;
        cin >> b;
        for (L j = 0; j < b ; j++){
            cin >> c;
            d += c;
            if (c == 1){
                e++;
            }else{
                f++;
            }
        }
        if (d%2 == 0){
            if ((e%2 == 0 && f%2 == 1 && e != 0) || b%2 == 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}