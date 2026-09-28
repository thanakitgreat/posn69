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

    L a,b,c;    
    cin >> a;
    if (a < 1 || a > X(10,4)){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        int d = 0;
        cin >> b >> c;
        if (b < 1 || b > X(10,9) || c < 1 || c > X(10,9)){
        return 0;
        }
        d = b%c;
        if (d == 0){
            cout << 0 << endl;
        }else{
            cout << c-d << endl;
        }
    }
    
    return 0;
}