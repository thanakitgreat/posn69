#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int b[10];
    int c;
    int e = 0;
    int f = 0;
    for (int i = 0 ; i < 10 ; i++){
        cin >> c;
        a[i] = c;
    }
    for (int i = 0 ; i < 10 ; i++){
        int *d = &a[i];
        if ( *d%2 == 0 ){
            f += *d;
        }
    }
    cout << f;
}
