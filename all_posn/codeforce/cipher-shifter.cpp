#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long L;
typedef string S;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ;){
        c *= a;
    }
    return c;
}

void Y(L a,S b){
    vector<char> c;
    for(L i = 0 ; i < a ; i++){
        L d = 1;
        while(i+d < a && b[i] != b[i+d]){
            d++;
        }
        c.push_back(b[i]);
        i += d;
    }
    for(char i : c){
        cout << i;
    }
    cout << "\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    S c;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(b,c);
    }
}