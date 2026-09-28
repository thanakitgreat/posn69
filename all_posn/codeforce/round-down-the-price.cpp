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
void Y(L a){
    L b = 0;
    while(a >= X(10,b)) b++;
    cout << a - X(10,b-1) << "\n";
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