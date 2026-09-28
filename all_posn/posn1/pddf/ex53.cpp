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
    
    L row,col,num,sum = 0;
    cin >> row >> col;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            cin >> num;
            nums[i][j] = num;
            if (num) sum++;
        }
    }
    cout << sum;
}