#include <bits/stdc++.h>
using namespace std;

int a(int b){
    if (b == 0){
        return 1;
    }else if (b > 0){
        return b*a(b-1);
    }
}

int e(int n, int k) {
    return a(n) / (a(k) * a(n - k));
}

int main() {
    int n;
    cin >> n;

    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << e(i, j) << " ";
        }
        cout << "\n";
    }
    cout << 1;

    return 0;
}