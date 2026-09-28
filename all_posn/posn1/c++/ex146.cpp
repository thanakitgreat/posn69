#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    getline(cin, a);
    stringstream b(a);
    int c, d = 0;
    while (b >> c) d += c;
    cout << "Sum of all values: " << d << endl;

}