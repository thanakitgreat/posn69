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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a, b = 0;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    while (b*(b+1)*(b+2)/6 <= a){
        b++;
    }
    cout << b-1;
    return 0;
}