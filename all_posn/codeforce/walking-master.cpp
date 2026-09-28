#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

void Y(L a,L b,L c,L d){
    if((a < c && c-a > d-b) || b > d){
        cout << -1 << "\n";
    }else{
        if(b == d){
            cout << abs(c-a) << "\n";
        }else{
            cout << abs((d-b)+(a+d-b-c)) << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c,d,e;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c >> d >> e;
        Y(b,c,d,e);
    }
}