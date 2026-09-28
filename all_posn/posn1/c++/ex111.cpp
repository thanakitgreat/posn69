#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    int d = 0, e = 0;

    for (auto c : a) {
        if (c == '(') {
            b += c;
            d++;
        }
        else if (c == ')') {
            if (d > 0) {
                b += c;
                d--;
            } else {
                b += '(';
                b += ')';
                e++;
            }
        }
    }
    while (d--) {
        b += ')';
        e++;
    }
    cout << e << "\n" << b;
}
