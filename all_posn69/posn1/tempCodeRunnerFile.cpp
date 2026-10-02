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

    L num,team,sum = 0; cin >> num >> team;
    vector<L> nums(num); vector<B> stat(num,true);
    vector<pair<L,L>> ans; vector<vector<L>> coin;
    for(L i=0 ; i<num ; i++){
        cin >> nums[i];
        ans.push_back({nums[i],i});
    }
    sort(ans.begin(),ans.end(),[](const pair<L,L>& a,const pair<L,L>& b){
        return a.first > b.first;
    });
    if(num != team){
        for(L i=0 ; i<team ; i++){
            vector<L> curcoin;
            if(ans[i].first > 0){
                if(stat[ans[i].second]){
                    curcoin.push_back(ans[i].first);
                    stat[ans[i].second] = false;
                    L left = ans[i].second-1,right =ans[i].second+1;
                    while(left != -1){
                        if(nums[left] > 0){
                            if(stat[ans[left].second]){
                                curcoin.push_back(nums[left]);
                                stat[left] = false;
                                left--;
                            }
                            else break;
                        }
                        else break;
                    }
                    while(right != num){
                        if(nums[right] > 0){
                            if(stat[ans[right].second]){
                                curcoin.push_back(nums[right]);
                                stat[right] = false;
                                right++;
                            }
                            else break;
                        }
                        else break;
                    }
                    coin.push_back(curcoin);
                }else{
                    curcoin.push_back(coin[i-1].back());
                    coin[i-1].pop_back();
                }
            }else{
                for(L j=i ; j<(team-i) ; j++) curcoin.push_back(ans[j].first);
                coin.push_back(curcoin);
            }
        }
    }
    else coin.push_back(nums);
    for(auto i : coin) for(auto j : i) sum += j;
    cout << sum;
}