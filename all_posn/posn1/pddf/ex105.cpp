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
    
    L num,sum = 0,count = 0;
    L *ptr = &num;
    L nums[10];
    for(L i = 0 ; i < 10 ; i++){
        cin >> num;
        nums[i] = num;
        sum += *ptr;
    }
    L avg =  sum/10;
    for(L i = 0 ; i < 10 ; i++){
        if(nums[i] > avg) count++;
    }
    cout << count;
}