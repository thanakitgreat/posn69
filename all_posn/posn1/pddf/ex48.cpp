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
    
    L num,numin,limit,sum = 0;
    cin >> num >> limit;
    L nums[num];
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        nums[i] = numin;
        if(numin > limit) sum += numin;
    }
    cout << sum;
}