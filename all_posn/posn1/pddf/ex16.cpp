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
    
    L num,sum = 0;
    cin >> num;
    do {
        sum += num;
        num--;
    }while (num > 0);
    cout << sum;
}