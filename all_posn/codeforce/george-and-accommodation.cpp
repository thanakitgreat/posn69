#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

    L a,b,c,d = 0;
    cin >> a;
    if (a < 0 || a > (X(10,2))){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b >> c;
        if (c - b >= 2){
            d++;
        }
    }
    cout << d;
    return 0;
}