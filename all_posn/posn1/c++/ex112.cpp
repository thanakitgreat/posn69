#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<char> a;
    int d = 0;
    char e;

    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (find(a.begin(), a.end(), c) == a.end()){
                a.push_back(c);
            }
        }
    }
    cout << a.size();
}