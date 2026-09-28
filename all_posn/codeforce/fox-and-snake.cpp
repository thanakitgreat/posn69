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

    L a,b;
    cin >> a >> b;
    if (a < 3 || b < 3 || a > 50 || b > 30 || a%2 == 0){
        return 0;
    }
    for (int i = 1 ; i <= a ; i++){
        for (int j = 1 ; j <= b ; j++){
            if (i%2 == 1){
                cout << "#";
            }else{
                if (i%4 == 2 && i%2 == 0){
                    if (j != b){
                        cout << ".";
                    }else{
                        cout << "#";
                    }
                }else if(i%4 == 0 && i%2 == 0){
                    if (j != 1){
                        cout << ".";
                    }else{
                        cout << "#";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}