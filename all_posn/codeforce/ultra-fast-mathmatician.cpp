#include <iostream>
#include <string>
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

    string a,b;    
    cin >> a >> b;
    L c = a.length();
    if (c < 1 || c > X(10,18)){
        return 0;
    }
    for (L i = 0 ; i < c ; i++){
        if (a[i] == b[i]){
            cout << 0;
        }else{
            cout << 1;
        }
    }
    
    return 0;
}