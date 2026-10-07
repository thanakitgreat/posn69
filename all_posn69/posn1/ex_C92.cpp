#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L row,col,num,x1,y1,x2,y2;
    cin >> row >> col >> num;
    L nums[row+1][col+1];
    vector<L> ans;
    for(L i = 1 ; i <= row ; i++) for(L j = 1 ; j <= col ; j++) cin >> nums[i][j];
    for(L i = 0 ; i < num ; i++){
        L sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for(L k = y1 ; k <= y2 ; k++) for(L j = x1 ; j <= x2 ; j++) sum += nums[j][k];
        ans.push_back(sum);
    }
    for(L i : ans) cout << i << "\n";
    
}