#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

void check_pos(I a){
    if (a > 0){
        cout << 1;
    }else{
        cout << 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    I num;
    cin >> num;
    check_pos(num);
}