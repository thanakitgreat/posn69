#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    int b[a];
    int d;
    int f = 0;
    for (int c = 0; c < a;c++){
        cin >> b[c];
    }
    for (int e = 0; e < a;e++){
        if (e == 0){
            d = b[e];
        }else{
            if (b[e] < d){
                d = b[e];
            }
        }
    }
    cout << d;
}