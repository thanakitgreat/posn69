#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num;
    cin >> num;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    cout << "sort: "; for(L i : nums) cout << i << " ";
    cout << "\nmedian: " << fixed << setprecision(1) ;
    if(num%2) cout << nums[(num-1)/2]/2.0;
    else cout << (nums[num/2]+nums[num/2-1])/2.0;
}