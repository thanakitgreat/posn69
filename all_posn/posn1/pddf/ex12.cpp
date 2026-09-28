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

    L sum = 1,num;
    cin >> num;
    while(num > 0){
        sum *= num;
        num--;
    }
    cout << sum;
}