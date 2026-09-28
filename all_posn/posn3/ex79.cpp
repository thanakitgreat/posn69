#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    string b;
    for (char c : a) {
        if (isalnum(c)){
            b.push_back(tolower(c));
        }
    }

    int i = 0;
    int j = b.size() - 1;
    bool p = true;

    while (i < j) {
        if (b[i] != b[j]) {
            p = false;
            break;
        }
        i++;
        j--;
    }

    if (p) {
        cout << "YES";
    }else{
        cout << "NO";
    }
}
