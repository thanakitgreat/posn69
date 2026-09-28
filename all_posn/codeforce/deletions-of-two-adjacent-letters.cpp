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

void Y(S a,char b){
    bool c = false;
    vector<L> d;
    for(L i = 0 ; i < a.length() ; i++){
        if(a[i] == b){
            d.push_back(i);
        }
    }
    for(L i = 0 ; i < d.size() ; i++){
        if(d[i]%2 == 0 && (a.length()-d[i]-1)%2 == 0){
            c = true;
            break;
        }
    }
    if(c){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    S b;
    char c;
    cin >> a;
    if (a < 1 || a > 1000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(b,c);
    }
}