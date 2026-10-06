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
    
    L num; cin >> num;
    vector<vector<L>> nums(num,vector<L>(num)),ans(num,vector<L>(num));
    pair<L,L> cur = {0,0};
    B stat = true;
    for(L i = 0 ; i < num ; i++) for(L j = 0 ; j  < num ; j++){
        cin >> nums[i][j]; ans[i][j] = 0;
    }

    while(cur.first != num-1 || cur.second != num-1){
        if(cur.second != num-1 && cur.first != num-1){
            if(nums[cur.first+1][cur.second]){
                ans[cur.first][cur.second] = 1;
                cur.second++;
            }else{
                if(nums[cur.first][cur.second+1]){
                    ans[cur.first][cur.second] = 1;
                    cur.second++;
                }else{
                    stat = false;
                    break;
                }
            }
        }else{
            if(cur.second == num-1){
                if(nums[cur.first+1][cur.second]){
                    ans[cur.first][cur.second] = 1;
                    cur.first++;
                }else{
                    stat = false;
                    break;
                }
            }else if(cur.first == num-1){
                if(nums[cur.first][cur.second+1]){
                    ans[cur.first][cur.second] = 1;
                    cur.second++;
                }else{
                    stat = false;
                    break;
                }
            }
        }
    }

    if(stat){
        ans[num-1][num-1] = 1;
        for(auto i : ans){
            for(L j : i) cout << j << " ";
            cout << "\n";
        }
    }
    else cout << "No path found";
}