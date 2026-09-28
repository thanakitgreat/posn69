#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,size,sum = 0;
    vector<L> nums;
    cin >> size;
    for(L i = 0 ; i < size ; i++){
        cin >> num;
        nums.push_back(num);
        sum += num;
    }
    cout << sum;
}