#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L bin;
    cin >> bin;
    for(L i = 0 ; i < bin ; i++){
        D pla,can,gla;
        cin >> pla >> can >> gla;
        D sum = pla + can + gla;
        cout << fixed << setprecision(1) << sum ;
        if(sum > 50) cout << ",Overloaded";
        if(pla > 20) cout << ",Check Type Plastic";
        if(can > 20) cout << ",Check Type Can";
        if(gla > 20) cout << ",Check Type Glass";
        if(i != bin -1) cout << "\n";
    }
}