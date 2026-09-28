#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    if (a <= 1990){
        if (b <= 1500){
            cout << 1250;
        }else if (1500 < b and b <= 2000){
            cout << 1400;
        }else{
            cout << 2000;
        }
    }else if (1991 <= a and a <= 1999){
        if (b <= 1500){
            cout << 1100;
        }else if (1500 < b and b <= 2000){
            cout << 1300;
        }else{
            cout << 1700;
        }
    }else{
        if (b <= 1500){
            cout << 1000;
        }else if (1500 < b and b <= 2000){
            cout << 1200;
        }else{
            cout << 1500;
        }
    }
}
