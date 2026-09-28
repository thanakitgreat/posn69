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

    L a,c = 0;  
    L b[5] = {100,20,10,5,1};
    cin >> a;
    if (a < 1 || a > X(10,9)){
        return 0;
    }
    for (int i = 0 ; i < 5 ; i++){
        while (a >= b[i]){
            c++;
            a -= b[i];
        }
    }
    cout << c;
    
    
    return 0;
}