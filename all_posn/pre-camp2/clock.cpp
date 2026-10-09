#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int seg_mask(S s) {
    int mask = 0;
    for (char c : s) mask |= (1 << (c - 'a'));
    return mask;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int h1, m1, h2, m2;
    if (!(cin >> h1 >> m1 >> h2 >> m2)) return 0;

    vector<S> digit_str = {
        "abcdef", "bc", "abdeg", "abcdg", "bcfg",
        "acdfg", "acdefg", "abcf", "abcdefg", "abcdfg"
    };

    vector<int> digit_mask(10);
    for (int i = 0; i < 10; i++) digit_mask[i] = seg_mask(digit_str[i]);

    auto trans_cost = [&](int d1, int d2) {
        int new_on = digit_mask[d2] & (~digit_mask[d1]);
        return __builtin_popcount(new_on);
    };

    int curr = h1 * 60 + m1;
    int end_time = h2 * 60 + m2;
    int total_energy = 0;

    while (curr < end_time) {
        int nxt = curr + 1;
        int ch = curr / 60, cm = curr % 60;
        int nh = nxt / 60, nm = nxt % 60;

        int d_curr[4] = {ch / 10, ch % 10, cm / 10, cm % 10};
        int d_nxt[4] = {nh / 10, nh % 10, nm / 10, nm % 10};

        for (int i = 0; i < 4; i++) {
            total_energy += trans_cost(d_curr[i], d_nxt[i]);
        }
        curr = nxt;
    }

    cout << total_energy << "\n";
    return 0;
}