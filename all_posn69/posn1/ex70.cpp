#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text;
    L sum = 0,pro = 1;
    vector<pair<L,L>> nums;
    getline(cin,text);
    for(C i : text){
        if(isdigit(i)){
            L j = i - '0';
            sum += j; pro *= j;
            auto it = find_if(nums.begin(),nums.end(),[j](const auto& k) {return k.first == j;});
            if(it == nums.end()) nums.push_back({j,1});
            else nums[it-nums.begin()].second++;
        }
    }
    if(!nums.empty()){
    cout << "Sum of digits: " << sum << "\n" << "Product of digits: " << pro \
    << "\n" << "Number of unique digits: " << nums.size() << "\n" << "Frequency of each digit:" << "\n";
    for(auto i : nums) cout << "Digit " << i.first << ": " << i.second << " times" << "\n";
    }
    else cout << "No digits found in the input.";
}