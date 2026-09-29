#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L row,col,csize,rsize,maxS = -1;
    cin >> row >> col >> rsize >> csize;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++) for(L j = 0 ; j < col ; j++) cin >> nums[i][j];
    for(L i = 0 ; i <= row-rsize ; i++){
        for(L j = 0 ; j <= col-csize ; j++){
            L sum = 0;
             for(L k = i ; k < i+rsize ; k++) for(L l = j ; l < j+csize ; l++) sum += nums[k][l];
            maxS= max(maxS,sum);
        }
    }
    cout << maxS;
}