#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    int d = 0;
    if ( a == 1 ){
        cout << "Not Prime";
    }else{
    for (int c = 2; c*c < a;c++){
        if ( a%c == 0){
            d++;
        }
    }
    if (d>0){
        cout << "Not Prime";
    }else{
        cout << "Prime";
    }}
    return 0;
}