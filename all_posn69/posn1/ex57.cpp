#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L row,col,in;
    cin >> row >> col;
    for(L i = 0 ; i < row ; i++){
        L sum = 0;
        for(L j = 0 ; j < col ; j++){
            cin >> in;
            sum += in;
        }
        cout << sum << "\n";
    }
    

}