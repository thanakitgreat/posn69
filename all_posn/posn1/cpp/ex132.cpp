#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    int b = 1;
    cin >> a;
    cout << "N : " << a << endl;
    cout << a << endl;
    while (a != 1){
        if (a%2 == 0){
            a /= 2;
            cout << a << endl;
            b++;
        }else{
            if (a != 1){
                a = 3*a+1;
                cout << a << endl;
                b++;
            }
        }
    }
    cout << "Length : " << b;
}