#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,numin,maxadd = 0,addcount = 1;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        if(i == 0) nums[0] = numin;
        else{
            nums[i] = numin;
            if(numin > nums[i-1]) addcount++;
            else if(numin <= nums[i-1] || i == num-1){
                maxadd = max(maxadd,addcount);
                addcount = 1;
            }
        }

    }
    cout << maxadd;
}