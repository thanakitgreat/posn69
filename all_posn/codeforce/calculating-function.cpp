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
L Y(L a){
    L b = a/2;
    if (a%2 == 0){
        return b;
    }else{
        return b-a;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    cin >> a;
    if (a < 1 || a > X(10,15)){
        return 0;
    }
    
    cout << Y(a);
    
    return 0;
}