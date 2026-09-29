#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,max1 = 0,max2 = 0;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i+=2) max1 += nums[i];
    for(L i = 1 ; i < num ; i+=2) max2 += nums[i];
    if(max1 > max2) cout << max1;
    else cout << max2;
}