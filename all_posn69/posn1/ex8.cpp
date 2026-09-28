#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<L> nums(3);
    for(L i = 0 ; i < 3  ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    cout << nums[2];
}