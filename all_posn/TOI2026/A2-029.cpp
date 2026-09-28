#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L side;
    cin >> side;
    for(L i = 1 ; i <= side ; i++){
        for(L j = 1 ; j <= i ; j++){
            if (j == 1 or j == i or i == 1 or i == side){
                cout << 0 << " ";
            }else{
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
}