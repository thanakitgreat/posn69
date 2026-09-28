#include <bits/stdc++.h>
using namespace std;

int a(int n) {
    int b;
    if (n == 0) {
        return 1;
    }
    cin >> b;
    return b * a(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << "The result is: " << a(n) << endl;
}
