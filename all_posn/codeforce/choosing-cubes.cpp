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
S Y(L a,L b,L c){
    vector<L> d;
    L e;
    for (L j = 0 ; j < a ; j++){
        cin >> e;
        d.push_back(e);
    }
    L f = d[b-1];
    sort(d.begin(),d.end(),greater<L>());
    vector<L> g;
    for(L i = 0 ; i < a ; i++){
        if (d[i] == f) g.push_back(i);
    }
    if (g.size() == 1){
        if (g[0] < c){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }else{
        L h = 0,k = 0;
        for (L l = 0 ; l < g.size() ; l++){
            if (g[l] < c){
                h++;
            }else{
                k++;
            }
        }
        if (h > 0 && k == 0){
            cout << "YES" << "\n";
        }else if(h == 0 && k > 0){
            cout << "NO" << "\n";
        }else if(h > 0 && k > 0){
            cout << "MAYBE" << "\n";
        }
    }
    d.clear(); g.clear();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c,d,e;
    cin >> a;
    if (a < 1 || a > 1000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c >> d;
        Y(b,c,d);
    }
}