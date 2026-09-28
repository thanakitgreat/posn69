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

void Y(L a){
    vector<L> b;
    L c;
    for(L i = 0 ; i < a ; i++){
        cin >> c;
        b.push_back(c);
    }
    vector<L> d;
    L e = 0;
    for(L f : b){
        L g = f;
        while (!d.empty() && (g % 2 == d.back() % 2)) {
            L h = d.back();
            d.pop_back();
            g *= h;
            e++;
        }
        d.push_back(g);
    }
    cout << e << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    cin >> a;
    if (a < 1 || a > 500){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b;
        Y(b);
    }
}