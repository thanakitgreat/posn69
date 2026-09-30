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
    
    S text; getline(cin,text);
    stringstream num(text);
    L in,count = 0;
    vector<L> nums;
    while(num >> in){
        nums.push_back(in);
        count++;
    }
    vector<L> ans = nums;
    while(count != 1){
        sort(nums.begin(),nums.end());
        L med = nums[count/2];
        auto it1 = find(nums.begin(),nums.end(),med);
        auto it2 = find(ans.begin(),ans.end(),med);
        cout << med << "\n";
        nums.erase(it1);
        L bomb = ans[(it2-ans.begin()+1)%ans.size()];
        auto it = find(nums.begin(),nums.end(),bomb);
        nums.erase(it);
        if(it2-ans.begin() == ans.size()-1){
            
        }else{
            ans.erase(it2);ans.erase(it2);
        }
        
        count -= 2;
    }
    cout << ans[0];
}