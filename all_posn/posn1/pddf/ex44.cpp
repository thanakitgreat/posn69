#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,numin,sum = 0,count = 0;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        nums[i] = numin;
        sum += numin;
    }
    D avg = sum/num;
    for(L i = 0 ; i < num ; i++){
        if(nums[i] > avg) count++;
    }
    
    cout << count;
}