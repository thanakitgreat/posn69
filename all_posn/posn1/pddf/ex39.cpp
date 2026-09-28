#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L row,col,numin,sum = 0;
    cin >> row >> col;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++){
        L maxnum = -2e15;
        for(L j = 0 ; j < col ; j++){
            cin >> numin;
            nums[i][j] = numin;
            maxnum = max(maxnum,numin);
        }
        cout << maxnum << " ";
    }
}