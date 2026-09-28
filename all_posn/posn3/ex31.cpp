#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int e = 0;
    for (int b = 1; b <= a; b++) {
        if (b%3 == 0 || b%5 == 0){
            e += b;
        }
    }
    cout << e;
}
