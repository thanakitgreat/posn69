#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    int b[5];
    int c;
    int e = 0;
    int f = 0;
    for (int i = 0 ; i < 5 ; i++){
        cin >> c;
        a[i] = c;
    }
    for (int i = 0 ; i < 5 ; i++){
        int *d;
        if ( i == 0 ){
            d = &a[4];
            cout << *d << " ";
        }else if(i > 0){
            d = &a[i-1];
            cout << *d << " ";
        }
    }
}
