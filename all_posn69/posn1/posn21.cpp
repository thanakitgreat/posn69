#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

B isVowel(char c) {
    char u = toupper(c);
    return u == 'A' || u == 'E' || u == 'I' || u == 'O' || u == 'U';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S line;
    if (!getline(cin, line)) return 0;

    size_t first = line.find_first_not_of(" \t");
    if (first == S::npos) line = "";
    else line = line.substr(first);

    S no_vowels = "";
    for (char c : line) {
        if (isVowel(c)) no_vowels += 'F';
        else no_vowels += c;
    }

    S with_w = "";
    for (size_t i = 0; i < no_vowels.length(); i++) {
        with_w += no_vowels[i];
        if ((i + 1) % 3 == 0 && i + 1 < no_vowels.length()) {
            with_w += 'w';
        }
    }

    reverse(with_w.begin(), with_w.end());

    if (with_w.length() >= 2) {
        with_w = with_w.substr(1, with_w.length() - 2);
    } else {
        with_w = "";
    }

    cout << with_w << " :3\n";

    return 0;
}