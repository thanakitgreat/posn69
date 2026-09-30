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
    L num; cin >> num;
    for(L i = 1 ; i <= num ; i++){
        for(L j = 1 ; j <= i ; j++) cout << "*";
        cout << "\n";
    }
}