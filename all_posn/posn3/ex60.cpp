#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    vector<int> b;
    int d = 0;
    int e;
    for (int c = 0; c < a;c++){
        cin >> e;
        b.push_back(e);
        d += b[c];
    }
    cout << d;
}