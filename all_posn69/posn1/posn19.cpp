#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S input_text = "";
    S line;
    while (getline(cin, line)) {
        input_text += line;
    }

    int count6 = 0, count7 = 0;
    for (char c : input_text) {
        if (c == '6') count6++;
        if (c == '7') count7++;
    }

    int pairs = min(count6, count7);

    if (count6 == 0 || count7 == 0) {
        cout << "Impossible to make 67\n";
    } else {
        cout << "Total: " << pairs << " pairs\n";
        for (int i = 0; i < pairs; i++) {
            cout << "67";
        }
        cout << "\n";
    }

    return 0;
}