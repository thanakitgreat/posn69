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
    L num = -2e18,nums[5];
    L* ptr = &num;
    for(L i = 0 ; i < 5 ; i++) cin >> nums[i];
    for(L i = 0 ; i < 5 ; i++) if(*ptr < nums[i]) *ptr = nums[i];
    cout << *ptr;
}