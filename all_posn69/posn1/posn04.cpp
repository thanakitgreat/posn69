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
    
    L num,stud; cin >> num >> stud;
    vector<L> nums(num), no(stud);
    L count = 0;
    for(L i=0 ; i<stud ; i++) cin >> no[i];
    for(L i=0 ; i<num ; i++) nums[i] = i+1;
    while(next_permutation(nums.begin(),nums.end())){
        if(count == 0) {prev_permutation(nums.begin(),nums.end()); count++;}
        auto it = find(no.begin(),no.end(),nums[0]);
        if(it == no.end() || stud == 0){
            for(L i : nums) cout << i << " ";
            cout << "\n";
        }else{
            
        }
    }
} 