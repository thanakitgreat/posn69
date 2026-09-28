#include <bits/stdc++.h>
using namespace std;

int a(int b,int c) {
    if (c == 0) {
        return 1;
    }
    return b * a(b,c-1);
}

int main() {
    int b,c ;
    cin >> b >> c;
    cout << a(b,c) << endl;
}
