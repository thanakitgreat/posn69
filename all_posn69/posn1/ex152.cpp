#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    D sum = 0;L num,mass,tall; cin >> num;
    for(L i=0 ; i<num ; i++){
        cin >> mass >> tall;
        sum += (mass*tall*9.81);
    }
    cout << fixed << setprecision(2);
    cout << "Total Gravitational Potential Energy: " << sum << " J";
}