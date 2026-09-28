#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    int b = 0,c = 0,d = 0;
    cin >> a;
    while (a >= 10){
        a -= 10;
        b++;
    }
    while (a >= 5){
        a -= 5;
        c++;
    }
    while (a >= 2){
        a -= 2;
        d++;
    }
    cout << "10 = " << b << endl;
    cout << "5 = " << c << endl;
    cout << "2 = " << d << endl;
    cout << "1 = " << a << endl;
}