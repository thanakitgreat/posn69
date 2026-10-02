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
    
    L num,use,in1,in2; cin >> num >> use;
    S stat; vector<L> nums;
    for(L i=1 ; i<=num ; i++) nums.push_back(i);
    for(L i=0 ; i<use ; i++){
        cin >> stat;
        if(stat == "CUT"){
            cin >> in1 >> in2;
            vector<L> temp;
            auto it1 = find(nums.begin(),nums.end(),in1);
            auto it2 = find(nums.begin(),nums.end(),in2);
            
        }else if(stat == "REVERSE"){
            cin >> in1 >> in2;
        }else if(stat == "PASTE"){
            cin >> in1;
        }
    }
}