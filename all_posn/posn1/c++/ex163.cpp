#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    for (char c : a)
        if (isalpha(c)) b += tolower(c);

    string c = b;
    reverse(c.begin(), c.end());
    cout << (b == c ? "YES" : "NO") << endl;
}
