#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L row,col,num,xSize,ySize,maxSum = -INF;
    cin >> row >> col >> xSize >> ySize;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            cin >> nums[i][j];
        }
    }
    for(L i = 0 ; i < row-xSize+1 ; i++){
        for(L j = 0 ; j < col-ySize+1 ; j++){
            L curSum = 0;
            for(L k = i ; k < i + xSize ; k++){
                for(L l = j ; l < j + ySize ; l++){
                    curSum += nums[k][l];
                }
            }
            maxSum = max(curSum,maxSum);
        }
    }
    cout << maxSum;
    
}