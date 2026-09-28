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

    L a,b,c = 0;
    cin >> a;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        c += b;
    }

    if (c == 0){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}