#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L fighter,num;
    cin >> fighter;
    vector<L> nums(fighter);
    vector<L> ans;
    for(L i = 0 ; i < fighter ; i++){
        cin >> nums[i];
    }
    for(L i = 0 ; i < fighter ; i++){
        if(i != 0 && i != fighter - 1){
            ans.push_back(nums[i] + nums[i-1] + nums[i+1]) ;
        }else{
            ans.push_back(nums[i]);
        }
    }
    for(L i : ans){
        L* ptr = &i;
         cout << *ptr << " ";
    }
}