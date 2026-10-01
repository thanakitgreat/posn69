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
    
    L num,in; cin >> num; cout << num << "\n";
    vector<L> nums;
    for(L i = 0 ; i < num ; i++){
        cin >> in; cout << in << " ";
        auto it = find(nums.begin(),nums.end(),in);
        if(it == nums.end()) nums.push_back(in);
        else nums.erase(it);
    }
    cout << "\n" << "The Solitary Number is " << nums[0];
}