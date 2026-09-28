#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int f = (a+b+c+d+e)/5;
    int *g = &f;
    cout << *g;
}