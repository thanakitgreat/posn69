#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    int b[5];
    int c;
    for (int i = 0 ; i < 5 ; i++){
        cin >> c;
        a[i] = c;
    }
    for (int i = 0 ; i < 5 ; i++){
        int *d = &a[i];
        b[5-i-1] = *d;
    }
    for (int i = 0 ; i < 5 ; i++){
        cout << b[i] << " ";
    }
}
