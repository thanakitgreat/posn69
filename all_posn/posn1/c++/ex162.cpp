#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    if (a >= 80 && b >= 80 && c >= 80){
        cout << "Grand Wizard";
    }else if(a > 90 || b > 90 || c > 90){
        cout << "Special Review";
    }else if((a+b+c)/3 >= 70 && (a,b >= 75 || b,c >= 75 || a,c >= 75)){
        cout << "Demon Slayer";
    }else if((a+b+c)/3 < 50){
        cout << "Failed";
    }else{
        cout << "Basic Level";
    }
}