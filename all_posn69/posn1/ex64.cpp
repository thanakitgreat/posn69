#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num;
    double sum = 0;
    cin >> num;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) {cin >> nums[i]; sum += nums[i];}
    sort(nums.begin(),nums.end());
    cout << "sorting: "; for(L i : nums) cout << i << " ";
    cout << "\navg: ";
    cout << fixed << setprecision(2) << sum/num/1.0;
}