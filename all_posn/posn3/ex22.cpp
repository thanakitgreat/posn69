#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b = 0;
    cin >> a;
    while (a != 1){
        a /= 2;
        b++;
    }
    cout << b;
}