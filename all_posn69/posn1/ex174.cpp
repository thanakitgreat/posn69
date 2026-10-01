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
    
    L row,col,in,sum = 0;; cin >> row >> col;
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            cin >> in;
            if(i != 0 && i != row-1 && j != col-1 && j != 0) sum += in;
        }
    }
    cout << sum;
}