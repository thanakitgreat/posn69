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
    
    L num,numin,even = 0;
    cin >> num;
    L nums[num];
    while(num > 0){
        cin >> numin;
        nums[num-1] = numin;
        if(numin % 2 == 0) even++;
        num--;
    }
    cout << even;
}