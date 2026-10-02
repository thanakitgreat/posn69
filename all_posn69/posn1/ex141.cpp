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
    
    L num,stat,in; cin >> num;
    vector<L> nums;
    for(L i=0 ; i<num ; i++){
        cin >> stat;
        if(stat == 1) {cin >> in; nums.push_back(in);}
        else if(stat == 2){
            cin >> in;
            auto it = find(nums.begin(),nums.end(),in);
            nums.erase(it);
        }
        else if(stat == 3){
            sort(nums.begin(),nums.end(),greater<>());
            for(L j=0 ; j<nums.size() ; j++){
                cout << "Rank " << j+1 << ": " << nums[j] << "\n";
            }
        }
    }
}