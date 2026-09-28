#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int b = 0;
    int c = 1;
    int d = 0;
    int e[10] = {0};
    vector<int> f;

    for (char g : a) {
        if (isdigit(g)) {
            int h = g - '0';
            b += h;
            c *= h;
            if (e[h] == 0) f.push_back(h);
            e[h]++;
            d++;
        }
    }

    if (d == 0) {
        cout << "No digits found in the input.";
    } else {
        cout << "Sum of digits: " << b << endl;
        cout << "Product of digits: " << c << endl;

        cout << "Number of unique digits: " << f.size() << endl;
        cout << "Frequency of each digit:" << endl;

        for (int h : f) {
            cout << "Digit " << h << ": " << e[h] << " times" << endl;
        }
    }
}
