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

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 1439){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b >> c;
        L d = (23-b)*60 + (60-c);
        cout << d << endl;
    }

}