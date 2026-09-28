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
    
    L size,num;
    cin >> size;
    L nums[11][11];
    for(L i = 0 ; i < size ; i++){
        for(L j = 0 ; j < size ; j++){
            cin >> nums[i][j];
        }
    }
    for(L i = size-1 ; i >= 0 ; i--){
        for(L j = 0 ; j < size ; j++){
            cout << nums[j][i] << " ";
        }
        cout << "\n";
    }
}