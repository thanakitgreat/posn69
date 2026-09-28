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
    L b = a/1000;
    L c = (a/100)%10;
    L d = (a/10)%10;
    L e = a%10;
    if (b != c && b != d && b != e && c != d && c != e && d != e){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    cin >> a;
    if (a < X(10,3) || a > 9*X(10,3)){
        return 0;
    }
    while (!(Y(a+1))){
        a++;
    }
    cout << a+1;
    return 0;
}