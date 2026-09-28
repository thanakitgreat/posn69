#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    double** c = new double*[a];
    for (int i = 0; i < a; i++)
        c[i] = new double[b];

    double* d = new double[a];
    cout << fixed << setprecision(2);

    for (int i = 0; i < a; i++) {
        double s = 0;
        for (int j = 0; j < b; j++) {
            cin >> c[i][j];
            s += c[i][j];
        }
        d[i] = s / b;
    }

    cout << "Average scores before sorting:" << endl;
    for (int i = 0; i < a; i++)
        cout << 'c' << i + 1 << ": " << d[i] << endl;

    vector<pair<double, int>> e;
    for (int i = 0; i < a; i++)
        e.push_back({d[i], i + 1});

    sort(e.begin(), e.end(), greater<>());

    cout << "Ranking after sorting:" << endl;
    for (int i = 0; i < a; i++)
        cout << 'c' << e[i].second << ": " << e[i].first << endl;

    for (int i = 0; i < a; i++)
        delete[] c[i];
    delete[] c;
    delete[] d;
}
