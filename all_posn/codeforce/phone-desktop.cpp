#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    L c = 0;
    L d = 0;
    if (b > 0) {
        d = b/2;
        if (b%2 != 0) {
            d++;
        }
    }
    c += d;
    L e = (d*15) - (b*4);
    L f = 0;
    if (a > e) {
        f = a-e;
    } 
    if (f > 0) {
        L g = f/15;
        if (f%15 != 0) {
            g++;
        }
        c += g;
    }
    cout << c << "\n";
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