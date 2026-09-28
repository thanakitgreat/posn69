#include <iostream>
#include <string>
#include <vector>
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

void Y(L a){
    L b;
    L c = 0,d = 0,e = 0,f = 0,g = 0,h = 0;
    vector<L> j;
    vector<L> k;
    for(L i = 0 ; i < a ; i++){
        cin >> b;
        if (b == 0){
            c++;
        }else if(b == 1){
            d++;
        }else if(b == 2){
            e++;
        }else if(b == 3){
            f++;
        }else if(b == 5){
            g++;
        }
        j.push_back(b);
        if (c >= 3 && d >= 1 && e >= 2 && f >= 1 && g >= 1){
            k.push_back(i+1);
        }
    }
    if (k.size() != 0){
        cout << k[0] << "\n";
    }else{
        cout << 0 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        Y(b);
    }
    return 0;
}