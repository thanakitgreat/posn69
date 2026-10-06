#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    L num,cut,min,max,count = 0;
    cin >> num >> cut >> min >> max;
    vector<L> nums(num);
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    for(L i=0 ; i<num ; i++){
        for(L j=i+1 ; j<num ; j++){
            if(nums[i]+nums[j] >= min && nums[i]+nums[j] <= max){
                count++;
            }
        }
    }
    cout << count;
}