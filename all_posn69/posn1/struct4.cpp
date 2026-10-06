#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){    
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L num,in,work,load; cin >> num >> work;
    deque<pair<L,L>> nums;
    for(L i=1 ; i<=num ; i++){
        cin >> load;
        nums.push_back({i,load});
    }
    while(!nums.empty()){
        nums[0].second -= work;
        if(nums[0].second <= 0){
            cout << nums[0].first << " ";
            nums.pop_front();
        }else{
            nums.push_back(nums[0]);
            nums.pop_front();
        }
    }
}