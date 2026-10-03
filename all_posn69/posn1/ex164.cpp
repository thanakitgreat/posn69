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
    
    L num,sum = 0; cin >> num;
    vector<L> nums(num);
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    L left = -1,right = -1,maxL = nums[0];
    vector<L> mL(num),mR(num),ans(num);
    for(L i=0 ; i<num ; i++){
        left = max(left,nums[i]);
        mL[i] = left;
    }
    for(L i=num-1 ; i>=0 ; i--){
        right = max(right,nums[i]);
        mR[i] = right;
    }
    for(L i=0 ; i<num ; i++) ans[i] = abs(nums[i]-min(mL[i],mR[i]));
    for(L i : ans) sum += i;
    cout << sum;
    
}