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

    L a;
    S b;
    cin >> a;
    if (a < 1 || a > 32){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        L c = 0;
        for (int j = 0 ; j < 5 ; j++){
            if (b[j] == 'A'){
                c++;
            }else{
                c--;
            }
        }
        if (c > 0){
            cout << 'A' << endl;
        }else{
            cout << 'B' << endl;
        }
    }
    return 0;
}