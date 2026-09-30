#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L row,col,fav,maxfav = -1; cin >> row >> col;
    L nums[row][col],ans[row][col];
    vector<pair<L,L>> cord;
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++) cin >> nums[i][j];
    }
    cin >> fav;
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            L cursum = 0;
            for(L k = 0 ; k < row ; k++){
                if(nums[k][j] == fav) cursum++;
            }
            for(L k = 0 ; k < col ; k++){
                if(nums[i][k] == fav) cursum++;
            }
            if(nums[i][j] == fav) cursum--;
            ans[i][j] = cursum;
        }
    }
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++) maxfav = max(maxfav,ans[i][j]);
    }
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            if(ans[i][j] == maxfav) cord.push_back({i+1,j+1});
        }
    }
    sort(cord.begin(),cord.end());
    cout << maxfav << "\n" << cord.size() << "\n";
    for(auto i : cord) cout << i.first << " " << i.second << "\n";
}