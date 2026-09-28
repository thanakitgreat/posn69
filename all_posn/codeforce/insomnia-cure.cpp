#include <iostream>
#include <vector>
using namespace std;

typedef long long L;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L a, d;  
    vector<L> b;
    for (int i = 0 ; i < 4 ; i++){
        cin >> a;
        if (a < 1) return 0;
        b.push_back(a);
    }
    cin >> d;
    vector<bool> c(d + 1, false);

    for (int e = 0 ; e < 4 ; e++){
        L f = b[e];
        for (L i = f; i <= d; i += f){
            c[i] = true;
        }
    }
    L g = 0;
    for (L i = 1; i <= d; i++){
        if (c[i]){
            g++;
        }
    }
    cout << g;
    return 0;
}