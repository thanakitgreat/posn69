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
    
    L num,maxN = 0; cin >> num;
    vector<L> nums(num);
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    vector<L> ans = nums;
    for(L i=0 ; i<num-1 ; i++){
        L cnt = 0;
        for(L j=i+1 ; j<num ; j++){
            if(nums[i] < nums[j]){
                cnt++;
            }
        }
        maxN = max(cnt,maxN);
    }
    sort(nums.begin(),nums.end());
    L maxval = nums[num-1];
    cout << maxN << "\n";
    cout << maxval << "\n";
    cout << count(nums.begin(),nums.end(),maxval) << "\n";
    for(L i=0 ; i<num ; i++){
        if(ans[i] == maxval) cout << i << " ";
    }
}