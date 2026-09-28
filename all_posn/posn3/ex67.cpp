#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,d;
    cin >> c;
    int a[c];
    int e = 0;
    for (int g = 0; g < c;g++){
        cin >> a[g];
    }
    for (int i = c-2 ; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                d = a[j];
                a[j] = a[j + 1];
                a[j + 1] = d;
                e++;
            }
        }
    }
        cout << e;
}