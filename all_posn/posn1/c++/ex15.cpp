#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    do{
        a /= 10;
    }while (a/10 >= 1);
    cout << a;
    return 0;
}