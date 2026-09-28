#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    float b = 0;
    float c = 1;
    cin >> a ;
    while (c <= a){
    b += c;
    c++;
    }
    float d = b/a;
    cout << d;
    return 0;
}