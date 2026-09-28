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
    
    L num;
    vector<L> nums;
    for(L i = 0 ; i < 10 ; i++){
        cin >> num;
        auto it = find(nums.begin(),nums.end(),num);
        if(it == nums.end()) nums.push_back(num);
    }
    for(L i : nums){
        cout << i << " ";
    }
}