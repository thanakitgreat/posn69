#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    L num,sum = 0;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i++) sum += nums[i];
    cout << sum;
}