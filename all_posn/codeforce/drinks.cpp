#include <iostream>
#include <iomanip>

using namespace std;

typedef long long L;
typedef double D;

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

    L a;
    D b,c = 0;
    cin >> a;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        c += b;
    }
    cout << fixed << setprecision(12) << c/a;
    
    return 0;
}