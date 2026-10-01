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
    
    L num; cin >> num;
    vector<L> ans(num),nums;
    B stat = true;
    for(L i = 0 ; i < num ; i++) cin >> ans[i];
    nums = ans;
    for(L i = 0 ; i < num-1 ; i++){
        B curstat = true;
        for(L j = 0 ; j < num-1 ; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
                curstat = false;
            }
        }
        if(nums == ans) break;
            for(L i : nums) cout << i << " ";
            cout << "\n";
        if(curstat) break;
    }
    if(ans == nums){
        cout << "frag" << "\n";
        for(L i : nums) cout << i << " ";
        cout << "\n";
    }
    cout << "Sorted: ";
    for(L i : nums) cout << i << " ";
}