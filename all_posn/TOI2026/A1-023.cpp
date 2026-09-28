#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    char b;

    cin >> a >> b;
    if (b == 'C' or b == 'c'){
        if (a <= 0){
            cout << "solid";
        }else if(0 < a and a < 100){
            cout << "liquid";
        }else if(a >= 100){
            cout << "gas";
        }
    }else if(b == 'F' or b == 'f'){
        if (a <= 32){
            cout << "solid";
        }else if(32 < a and a < 212){
            cout << "liquid";
        }else if(a >= 212){
            cout << "gas";
        }
    }
}