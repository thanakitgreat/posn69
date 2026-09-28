#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num,divide,remian;
    B stat = true;
    vector<L> nums;
    for(L i = 0 ; i < 1 ; i++){
        cin >> num;
        nums.push_back(num);
    }
    
    sort(nums.begin(),nums.end());
    L num1 = nums[0],num2 = nums[1];
    
    while(remian != 0){
        remian = (num2)%(num1);
    }
}