#include <bits/stdc++.h>
using namespace std;

bool ok(string s) {
    if (s.empty() || s.size() > 3) return false;
    if (s.size() > 1 && s[0] == '0') return false;
    int n = stoi(s);
    return n >= 0 && n <= 255;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<string> m;
    
    for (int i = 1; i <= 3 && i < n; i++) {
        for (int j = i + 1; j <= i + 3 && j < n; j++) {
            for (int k = j + 1; k <= j + 3 && k < n; k++) {
                string a = s.substr(0, i);
                string b = s.substr(i, j - i);
                string c = s.substr(j, k - j);
                string d = s.substr(k);
                
                if (ok(a) && ok(b) && ok(c) && ok(d)) {
                    m.push_back(a + "." + b + "." + c + "." + d);
                }
            }
        }
    }
    
    if (m.empty()) {
        cout << "none";
    } else {
        for (int i = 0; i < m.size(); i++) {
            if (i > 0) cout << " ";
            cout << m[i];
        }
    }
    
    return 0;
}