#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,in,person; cin >> num >> person;
    vector<L> nums;
    for(L i = 0 ; i < num ; i++) {cin >> in ; nums.push_back(in);}
    vector<bool> stat(nums.size(),true);
    vector<vector<L>> sums;
    for(L i = 0 ; i < person ; i++){
        L max = -2e18,maxi = -1,sum = 0;
        for(L j = 0 ; j < num ; j++){
            if(nums[j] > max){max = nums[j]; maxi = j;}
        }
        sum += max; stat[maxi] = false;
        L left = maxi,right = maxi;
        if(maxi+1 != num && maxi-1 != -1){
            if(nums[maxi+1] > -1){
                sum += nums[maxi+1];

            }else if(nums[maxi+1] > -1){
                sum += nums[maxi+1];
            }
        }
    }

}