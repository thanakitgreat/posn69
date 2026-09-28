#include <iostream>
#include <vector>
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

    L a,c;
    L b[102];
    cin >> a;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    for (L i = 1 ; i <= a ; i++){
        cin >> c;
        b[c] = i;
    }
    
    for (L i = 1 ; i <= a ; i++){
        cout << b[i] << " ";
    }
    
    return 0;
}