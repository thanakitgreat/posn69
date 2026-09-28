#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[7];
    int b[7];
    int c;
    int e = -1;
    int f;
    for (int i = 0 ; i < 7 ; i++){
        cin >> c;
        a[i] = c;
    }
    cin >> f;
    for (int i = 0 ; i < 7 ; i++){
        int *d = &a[i];
        if ( *d == f ){
            e = i;
            break;
        }
    }
    cout << " Index : " << e;
}
