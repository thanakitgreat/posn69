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
    
    L num,count = 0; cin >> num;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    cout << nums[0]+nums[num-1];
}