#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int e = 0;
    int c;
    cin >> c;
    for ( int d = 1 ; d < c; d++){
        e = a+b;
        a = b;
        b = e;
    }
    cout << b;
}