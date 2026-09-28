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
    
    L row,col,num,test;
    cin >> row >> col;
    L nums[row][col];
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++) cin >> nums[i][j];
    }
    cin >> test;
    for(L i = 0 ; i < test ; i++){
        L sum = 0,x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(L j = x1-1 ; j < x2 ; j++){
            for(L k = y1-1 ; k < y2 ; k++){
                sum += nums[j][k];
            }
        
        }
        cout << sum << "\n";
    }
}