#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

S get_feedback(const S& guess, const S& secret, int len) {
    S res(len, 'B');
    unordered_map<char, int> count;
    for (int i = 0; i < len; i++) {
        if (guess[i] == secret[i]) {
            res[i] = 'G';
        } else {
            count[secret[i]]++;
        }
    }
    for (int i = 0; i < len; i++) {
        if (res[i] != 'G') {
            if (count[guess[i]] > 0) {
                res[i] = 'Y';
                count[guess[i]]--;
            }
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int N, Q, len;
    if (!(cin >> N >> Q >> len)) return 0;

    vector<S> candidates(N);
    for (int i = 0; i < N; i++) {
        cin >> candidates[i];
    }

    vector<pair<S, S>> queries(Q);
    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second;
    }

    int valid_count = 0;
    S min_lex = "";

    for (int i = 0; i < N; i++) {
        B ok = true;
        for (int j = 0; j < Q; j++) {
            if (get_feedback(queries[j].first, candidates[i], len) != queries[j].second) {
                ok = false;
                break;
            }
        }
        if (ok) {
            valid_count++;
            if (min_lex == "" || candidates[i] < min_lex) {
                min_lex = candidates[i];
            }
        }
    }

    cout << valid_count << "\n";
    if (valid_count > 0) {
        cout << min_lex << "\n";
    } else {
        cout << "-\n";
    }

    return 0;
}