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
    
    L num,lim,in,maxN = -1; cin >> num >> lim;
    vector<L> nums(num);
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    for(L i=0 ; i<num ; i++){
        for(L j=i+1 ; j<num ; j++){
            if(nums[j]+nums[i] > maxN && nums[j]+nums[i] <= lim) maxN = nums[j]+nums[i];
        }
    }
    cout << maxN;
}