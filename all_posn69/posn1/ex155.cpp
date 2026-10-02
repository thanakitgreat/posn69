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
    
    L num,lim,in,count = 0; cin >> num >> lim;
    vector<L> nums(num);
    vector<pair<L,L>> take; 
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    for(L i=0 ; i<num ; i++){
        for(L j=i+1 ; j<num ; j++){
            if(nums[j]+nums[i] == lim){
                pair<L,L> p1 = {nums[i],nums[j]},p2 = {nums[j],nums[i]};
                auto it1 = find(take.begin(),take.end(),p1);
                auto it2 = find(take.begin(),take.end(),p2);
                if(it1 == take.end() && it2 == take.end()){
                    count++;
                    take.push_back({nums[i],nums[j]});
                }
            }

        }
    }
    cout << count;
}