#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,sum = 0,lim;
    cin >> num >> lim;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i++) if(nums[i] > lim) sum += nums[i];
    cout << sum;
}