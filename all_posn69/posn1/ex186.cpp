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
    
    L num,minN = 2e18; cin >> num;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    for(L i = 0 ; i < num-1 ; i++){
        if(nums[i+1]-nums[i] < minN) minN = min(minN,nums[i+1]-nums[i]);
    }
    cout << minN << "\n" << nums[num-1]-nums[0];
}