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
    
    L num,in,sum = 0; cin >> num;
    vector<L> nums;
    for(L i = 0 ; i < num ; i++){
        cin >> in;
        auto it = find(nums.begin(),nums.end(),in);
        if(it == nums.end()) {nums.push_back(in); sum += in;}
    }
    cout << sum;
}