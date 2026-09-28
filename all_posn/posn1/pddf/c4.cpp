#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L size,num,sum = 0;
    cin >> size;
    L nums[1001];
    for(L i = 0 ; i < size ; i++){
        cin >> num;
        nums[i] = num;
    }
    for(L i = 0 ; i < size ; i++){
        sum += nums[i];
    }
    cout << sum;
}