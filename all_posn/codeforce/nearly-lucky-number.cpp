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

bool Y(L a){
    if (a%10 == 4 || a%10 == 7){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b = 0,c = 0;
    cin >> a;
    if (a < 2 || a > X(10,18)){
        return 0;
    }
    while (a != 0){
        if (Y(a)){
            b++;
        }
        a /= 10;
    }
    if (b == 4 || b == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}