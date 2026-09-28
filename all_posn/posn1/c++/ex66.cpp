#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,d;
    cin >> c;
    char a[c];
    float e = 0;
    for (int g = 0; g < c;g++){
        cin >> a[g];
    }
    for (int i = c-2 ; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                d = a[j];
                a[j] = a[j + 1];
                a[j + 1] = d;
            }
        }
    }
    for (int i = 0 ; i < c ; i++){
        cout << a[i] << " ";
    }
}