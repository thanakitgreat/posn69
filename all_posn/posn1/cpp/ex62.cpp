#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> b;
    vector<int> c;

    for (int d = 0; d < a; d++) {
        int e, f;
        cin >> e >> f;

        bool g = false;
        for (int h = 0; h < b.size(); h++) {
            if (b[h] == e) {
                if (f > c[h]) c[h] = f;
                g = true;
                break;
            }
        }

        if (!g) {
            b.push_back(e);
            c.push_back(f);
        }
    }

    int sum = 0;
    for (int i = 0; i < c.size(); i++) sum += c[i];
    cout << sum;
}
