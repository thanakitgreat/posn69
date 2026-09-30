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
    L sum = 0,nums[10];
    for(L i = 0 ; i < 10 ; i++) cin >> nums[i];
    for(L i = 0 ; i < 10 ; i++){
        L* in = &nums[i];
        if(*in % 2 == 0) sum += *in;
    }
    cout << sum;
}