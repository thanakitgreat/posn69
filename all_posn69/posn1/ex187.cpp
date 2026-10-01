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
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    for(L i : nums) cout << i << " ";
    cout << "\n";
    if(nums[num-1]*nums[num-1] == nums[num-1-1]*nums[num-1-1]+nums[num-1-2]*nums[num-1-2]) cout << "YES";
    else cout << "NO";
}