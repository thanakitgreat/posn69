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
    vector<pair<L,L>> ans;
    for(L i = 0 ; i < num ; i++) {
        cin >> nums[i]; L in = nums[i];
        auto it = find_if(ans.begin(),ans.end(),[in] (const auto& a){
            return a.second == in;
        });
        if(it == ans.end()) ans.push_back({1,in});
        else ans[it-ans.begin()].first++;
    }
    sort(nums.begin(),nums.end()); sort(ans.begin(),ans.end());
    cout << "Sorted: ";
    for(L i : nums) cout << i << " ";
    cout << "\n" << "Mode: " << ans[ans.size()-1].second << "\n";
    cout << "Frequency: " << ans[ans.size()-1].first << "\n";
    auto it = find(nums.begin(),nums.end(),ans[ans.size()-1].second);
    cout << "Start index: " << it-nums.begin() << "\n" << "End index: " 
    << it-nums.begin()+((ans[ans.size()-1].first)-1);
}