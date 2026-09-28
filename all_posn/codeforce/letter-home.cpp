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

void Y(L a,L b){
    L c,f = 0;
    vector<L> d;
    vector<L> e;
    for(L i = 0 ; i < a ; i++){
        cin >> c;
        d.push_back(c);
    }
    sort(d.begin(),d.end());
    if (b <= d[a-1] && b >= d[0]){
        e.push_back(b-d[0]);
        e.push_back(d[a-1]-b);
        sort(e.begin(),e.end());
        cout << 2*e[0]+e[1] << "\n";
    }else if(b < d[0]){
        cout << d[a-1]-b << "\n";
    }else if(b > d[a-1]){
        cout << b-d[0] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(b,c);
    }
}