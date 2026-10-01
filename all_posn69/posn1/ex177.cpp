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
    
    L row,col,count = 0; cin >> row >> col;
    vector<vector<L>> nums(row,vector<L>(col));
    for(L i = 0 ; i < row ; i++) for(L j = 0 ; j < col ; j++) cin >> nums[i][j];
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            L curmin = 2e18,curmax = -2e18;
            for(L k = 0 ; k < row ; k++) curmin = min(curmin,nums[i][k]);
            for(L k = 0 ; k < col ; k++) curmax = max(curmax,nums[k][j]);
            if(nums[i][j] == curmin && nums[i][j] == curmax) count++;
        }
    }
    cout << count;
}