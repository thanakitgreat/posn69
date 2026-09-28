#include <bits/stdc++.h>
using namespace std;

bool a(string b, string c) {
    string d, e;
    for (char f : b)
        if (isalnum(f)) d += tolower(f);
    for (char f : c)
        if (isalnum(f)) e += tolower(f);

    if (d.size() != e.size()) return false;

    sort(d.begin(), d.end());
    sort(e.begin(), e.end());
    return d == e;
}

int main() {
    string b, c, d;
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);

    string e;
    stringstream f(b);
    vector<string> g;

    while (f >> e) {
        int h = 0, i = e.size() - 1;
        while (h <= i && !isalnum(e[h])) h++;
        while (i >= h && !isalnum(e[i])) i--;

        if (h > i) {
            g.push_back(e);
        } else {
            string j = e.substr(0, h);
            string k = e.substr(i + 1);
            string l = e.substr(h, i - h + 1);

            if (a(l, c)) g.push_back(j + d + k);
            else g.push_back(e);
        }
    }

    for (int m = 0; m < g.size(); m++) {
        if (m > 0) cout << " ";
        cout << g[m];
    }
    cout << endl;
}
