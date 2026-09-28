#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b = 0;
    cin >> a;
    while ( a > 0 ){
        b = (10*b) + (a%10);
        a /= 10;
    }
    cout << b;
}