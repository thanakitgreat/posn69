#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

L n;
vector<S> items;
vector<B> used;
vector<S> current;
L count_perm = 0;

void permute() {
    if ((L)current.size() == n) {
        for (L i = 0; i < n; i++) {
            cout << current[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
        count_perm++;
        return;
    }

    for (L i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(items[i]);
            permute();
            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    items.resize(n);
    used.assign(n, false);

    for (L i = 0; i < n; i++) {
        cin >> items[i];
    }

    permute();
    cout << count_perm;
    return 0;
}