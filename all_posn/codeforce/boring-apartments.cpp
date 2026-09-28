#include <iostream>
using namespace std;

typedef long long L;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}
L Y(L a){
    L b = 0;
    while (a > 0){
        b++;
        a /= 10;
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    L c[4] = {1,2,3,4};
    cin >> a;
    if (a < 1 || a > 36){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        if (b < 1 || b > X(10,4));
        L d = b%10;
        L e = Y(b);
        L f = 10*(d-1);
        f += e*(e+1)/2;
        cout << f << endl;
    }
    return 0;
}