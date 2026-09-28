#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,max1 = -2e18,maxs = 1,streak = 1;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num-1 ; i++){
        if(nums[i] > nums[i+1]) streak++;
        else{
            if(streak > maxs) maxs = streak;
            streak = 0;
        }
    }
    cout << maxs;
}