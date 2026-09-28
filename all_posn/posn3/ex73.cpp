#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    getline(cin, a);
    getline(cin, b);

    size_t c = a.find(b);
    while(c != string::npos){
        a.replace(c, b.size(), string(b.size(), '*'));
        c = a.find(b, c + 1);
    }
    cout << a;
}
