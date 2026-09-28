#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    getline(cin,a);
    
    string b;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] == '%' && i + 2 < a.size()) {
            string c = a.substr(i + 1, 2);
            char d = (char)stoul(c, nullptr, 16);
            b.push_back(d);
            i += 2;
        } else {
            b.push_back(a[i]);
        }
    }
    cout << b;
}