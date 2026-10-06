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
    
    S text,in; getline(cin,text);
    stringstream ss(text);
    vector<L> nums;
    while(ss >> in) nums.push_back(in.length());
    sort(nums.begin(),nums.end(),[](const L& a, const L& b)
    {return to_string(a)+to_string(b) > to_string(b)+to_string(a);});
    for(L i : nums) cout << i; 
}