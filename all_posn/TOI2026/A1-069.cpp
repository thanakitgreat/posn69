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
    
    L row,col;
    cin >> row >> col;
    if(row%2){
        for(L i = 0 ; i < row ; i++){
            for(L j = 0 ; j < col ; j++){
                if(i <= row/2) cout << 'A' << " ";
                else cout << 'K' << " ";
            }
            if(i != row-1) cout << "\n";        
        }
    }else{
        for(L i = 0 ; i < row ; i++){
            for(L j = 0 ; j < col ; j++){
                if(i < row/2) cout << 'A' << " ";
                else cout << 'K' << " ";
            }
            if(i != row-1) cout << "\n";
        }        
    }
}