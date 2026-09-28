#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = 1;
    while (a/10 != 0){
        a /= 10;
        b++;
    }
    cout << b;
    return 0;
}