#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num,team; cin >> num >> team;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    
}