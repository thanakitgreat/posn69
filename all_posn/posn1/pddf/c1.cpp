#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

void check_odd(I a){
    if (a % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
}

int main() {
    I num;
    cin >> num;
    check_odd(num);
}