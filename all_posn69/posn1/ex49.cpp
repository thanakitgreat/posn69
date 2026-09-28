#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,max = -2e18,sum = 0;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i+=2) if(nums[i] > max) max = nums[i];
    sum += max;
    max = -2e18;
    for(L i = 1 ; i < num ; i+=2) if(nums[i] > max) max = nums[i];
    sum += max;
    cout << sum;
}