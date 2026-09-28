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

    L a,d = 0,e = 0;
    string b;

    cin >> a >> b;
    if (a < 1 || a > X(10,6)){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        char c = b[i];
        if (c == 'D'){
            d++;
        }else{
            e++;
        }
    }
    if (d > e){
        cout << "Danik";
    }else if(e > d){
        cout << "Anton";
    }else{
        cout << "Friendship";
    }
    return 0;
}