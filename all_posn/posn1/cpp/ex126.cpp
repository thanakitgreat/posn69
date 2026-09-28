#include <bits/stdc++.h>
using namespace std;

int n;
int a[20][20], b[20][20];
bool f = false;

void walk(int r, int c) {
    if (r == n - 1 && c == n - 1 && a[r][c] == 1) {
        b[r][c] = 1;
        f = true;
        return;
    }
    if (r >= n || c >= n || a[r][c] == 0){
        return;
    }
    b[r][c] = 1;
    walk(r + 1, c);
    if (!f) {
        walk(r, c + 1);
    }
    if (!f) {
        b[r][c] = 0;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    walk(0, 0);
    if (!f){
        cout << "No path found" << endl;
    }else{
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}
