#include <iostream>
using namespace std;

typedef long long L;

L X(L a,L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c,d = 0;

    cin >> a >> b;
    if (a < 1 || a > 1000 || b < 1 || b > 1000) return 0;
    for (int i = 0 ; i < a ; i++){
        cin >> c;
        if (c <= b){
            d++;
        }else{
            d += 2;
        }
    }
    cout << d;
    return 0;
}