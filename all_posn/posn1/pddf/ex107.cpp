#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,sum = 0;
    L *ptr = &num;
    L nums[5];
    for(L i = 0 ; i < 5 ; i++){
        cin >> num;
        if(i != 4) nums[i+1] = *ptr;
        else nums[0] = *ptr;
    }
    for(L i : nums) cout << i << " ";
}