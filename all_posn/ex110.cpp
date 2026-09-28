#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int b;
    string g;
    getline(cin,g);
    stringstream ss(g);
    while (ss >> b){
        a.push_back(b);
    }

    while (a.size() > 1) {
        vector<int> c = a;
        sort(c.begin(), c.end());
        int d = c[c.size() / 2];
        int e = find(a.begin(), a.end(), d) - a.begin();
        int f = (e + 1) % a.size();

        if (e < f) {
            a.erase(a.begin() + e);
            a.erase(a.begin() + f - 1);
        } else {
            a.erase(a.begin() + e);
            a.erase(a.begin());
        }
    }

    cout << a[0] << endl;
}
