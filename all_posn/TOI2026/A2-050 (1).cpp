#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef long long L;
typedef string S;

C lettN[26] = {'A','B','C','D','E','F','G','H','I','J',
               'K','L','M','N','O','P','Q','R','S','T',
               'U','V','W','X','Y','Z'};

// FIX 3: bounce off Z instead of wrapping back to A
int bounce(int s, int d) {
    int p = s + d;
    if (p > 25) p = 50 - p;
    return p;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S code;
    cin >> code;

    L size = stoll(code.substr(0, code.size() - 1));

    // FIX 1: convert k to uppercase before any comparison
    C k     = toupper(code[code.size() - 1]);
    bool isSym = (k == '#');
    int  start = isSym ? 0 : (k - 'A');

    if (size % 2) {                       // ── ODD ──
        L mid = size / 2 + 1;
        for (L i = 1; i <= size; i++) {
            // FIX 2: compute dist per row (was a static index=0)
            L dist = abs(mid - i);
            for (L j = 1; j <= size; j++) {
                bool onDiag = (j == dist + 1) || (j == size - dist);
                if (onDiag) {
                    if (isSym) cout << '#';
                    else       cout << lettN[bounce(start, dist)];
                } else {
                    cout << '-';
                }
            }
            cout << "\n";
        }
    } else {                              // ── EVEN ──
        L midC = size / 2 + 1;
        for (L i = 1; i <= size; i++) {
            // FIX 5: correct two-centre distance formula
            L dist = (i < midC) ? (midC - 1 - i) : (i - midC);
            // FIX 4: inner loop goes to size, not size-1
            for (L j = 1; j <= size; j++) {
                // FIX 6: removed broken special-case for row 1 / row size;
                //         unified formula handles them correctly
                bool onDiag = (j == dist + 1) || (j == size - dist);
                if (onDiag) {
                    // FIX 7: even-letter branch now actually prints letters
                    if (isSym) cout << '#';
                    else       cout << lettN[bounce(start, dist)];
                } else {
                    cout << '-';
                }
            }
            cout << "\n";
        }
    }
}
