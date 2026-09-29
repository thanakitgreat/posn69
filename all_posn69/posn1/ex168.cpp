#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num;
    cin >> num;
    vector<L> nums(num);
    vector<pair<L,L>> peak;
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 1 ; i < num-1 ; i++){
        if(nums[i] > nums[i+1] && nums[i] > nums[i-1]) peak.push_back({0,i});
    }
    for(L i = 0 ; i < peak.size() ; i++){
        L left = peak[i].second,right = peak[i].second,sum = 0;
        for(L j = left-1 ; j >= 0 ; j--){
            if(nums[peak[i].second] > nums[j]) sum++;
            else break;
        }
        for(L j = right+1 ; j < num ; j++){
            if(nums[peak[i].second] > nums[j]) sum++;
            else break;
        }
        peak[i].first = sum;
    }
    sort(peak.rbegin(),peak.rend());
    if(peak.empty()) cout << "No Peak";
    else cout << peak[0].second+1 << " " << nums[peak[0].second] << " " << peak[0].first;
    
}