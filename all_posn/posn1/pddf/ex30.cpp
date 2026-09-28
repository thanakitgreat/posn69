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
    
    L num;
    cin >> num;
    D sum = (num * (num + 1))/2;
    cout << fixed << setprecision(1) << sum/num;
}