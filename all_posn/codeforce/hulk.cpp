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

    L a;
    cin >> a;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    for (int i = 1 ; i <= a ; i++){
        if(a%2 != 0){
            if (a == 1){
                cout << "I hate it";
            }else{
                if (i%2 == 1){
                    if (i != a){
                        cout << "I hate that ";
                    }else{
                        cout << "I hate it";
                    }
                }else{
                    cout << "I love that ";
                }
            }
        }else{
            if (i%2 == 1){
                cout << "I hate that ";
            }else{
                if (i != a){
                    cout << "I love that ";
                }else{
                    cout << "I love it";
                }
            }
        }
    }
    
    return 0;
}