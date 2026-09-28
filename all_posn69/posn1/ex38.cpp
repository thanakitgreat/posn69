#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L row,col,sum = 0;
    cin >> row >> col;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            cin >> nums[i][j];
            sum += nums[i][j];
        }
    }
    cout << sum;
}