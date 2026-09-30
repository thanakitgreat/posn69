#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num,count = 0;
    cin >> num;
    vector<L> nums(num);
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    while(true){
        L cur = 0;
        for(L i = 0 ; i < num-1 ; i++){
            if(nums[i] > nums[i+1]) {
                swap(nums[i],nums[i+1]);
                cur++;
            }
        }
        if(cur != 0) count += cur;
        else break;
    }
    cout << count;
}