#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    int c;
    int e = 1e-18;

    for (int i = 0 ; i < 5 ; i++){
        cin >> c;
        a[i] = c;
    }
    for (int i = 0 ; i < 5 ; i++){
        int *d = &a[i];
        if (*d > e){
            e = *d;
        }
    }
    cout << e;
    
}
