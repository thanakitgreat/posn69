#include <bits/stdc++.h>
using namespace std;

int a(int b,int c){
    if (c == 0){
        return b;
    }
    return a(c,b%c);
}

int main(){
    int b,c;
    cin >> b >> c;
    cout << b*c/a(b,c);
}