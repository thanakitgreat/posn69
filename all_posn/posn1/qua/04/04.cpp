#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> pyramid(n, vector<int>(n, 1));

    for (int layer = 0; layer <= (n - 1) / 2; layer++) {
        int value = 4 + layer * m;

        for (int i = layer; i < n - layer; i++) {
            pyramid[layer][i] = value;
            pyramid[n - layer - 1][i] = value;
            pyramid[i][layer] = value;
            pyramid[i][n - layer - 1] = value;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << pyramid[i][j];
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}