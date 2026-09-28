#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    int b[a];
    int d = 0;
    int f = 0;
    for (int c = 0; c < a;c++){
        cin >> b[c];
        d += b[c];
    }
    for (int e = 0; e < a;e++){
        if (b[e] > d/a){
            f++;
        }
    }
    cout << f;
}