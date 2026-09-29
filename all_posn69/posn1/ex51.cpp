#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,in,group,maxN = -3001; cin >> num >> group;
    vector<L> nums;
    for(L i = 0 ; i < num ; i++) {cin >> in ; nums.push_back(in);}
    for(L i = group ; i <= num ; i += group){
        for(L j = 0 ; j <= num-i ; j++){
            L cursum = 0;
            for(L k = j ; k < j+i ; k++) cursum += nums[k];
            maxN = max(maxN,cursum);
        }
    }
    cout << maxN;

}