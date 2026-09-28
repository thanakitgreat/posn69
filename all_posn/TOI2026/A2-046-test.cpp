#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    L total_lines;
    if (!(cin >> total_lines)) return 0;

    string dummy;
    getline(cin, dummy); 

    for (L i = 1; i <= total_lines; i++) {
        S s;
        if (!getline(cin, s)) break;
        if (!s.empty() && s.back() == '\r') s.pop_back();

        L max_v = 0, cmax_v = 0, vowel_count = 0;
        for (C a : s) {
            C b = tolower(a);
            if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {
                vowel_count++;
                cmax_v++;
            } else {
                if (cmax_v > max_v) max_v = cmax_v;
                cmax_v = 0;
            }
        }
        if (cmax_v > max_v) max_v = cmax_v;

        cout << "Line " << i << ": vowels = " << vowel_count 
             << ", max_consecutive = " << max_v << "\n";
    }
    return 0;
}