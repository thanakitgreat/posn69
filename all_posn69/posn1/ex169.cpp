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
    
    L row,col,home,stren,xin,yin,kon;
    cin >> row >> col >> home >> stren;
    L nums[row+1][col+1];
    for(L i = 1 ; i <= row ; i++) for(L j = 1 ; j <= col ; j++) nums[i][j] = 0;
    vector<pair<L,pair<L,L>>> pole; 
    for(L i = 0 ; i < home ; i++){
        cin >> xin >> yin >> kon;
        nums[xin][yin] = kon;
    }
    for(L i = 1 ; i <= row ; i++){
        for(L j = 1 ; j <= col ; j++){
            L powsum = 0;
            for(L k = 1 ; k <= row ; k++){
                for(L l = 1 ; l <= col ; l++){
                    if(abs(i-k)+abs(j-l) <= stren) powsum += nums[k][l];
                }
            }
            if(powsum != 0) pole.push_back({powsum,{i,j}});
        }
    }
    sort(pole.begin(),pole.end());
    L maxS = pole[pole.size()-1].first;
    vector<pair<L,L>> ans;
    for(L i = pole.size()-1 ; i >= 0 ; i--){
        if(pole[i].first == maxS) ans.push_back(pole[i].second);
        else break;
    }
    sort(ans.begin(),ans.end());
    cout << ans[0].first << " " << ans[0].second << " " << maxS;

}