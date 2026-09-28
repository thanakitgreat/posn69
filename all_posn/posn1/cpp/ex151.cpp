#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    if (a.length() == 10){
        if (a[0] == '0'){
            cout << a.substr(0,3) << "-" << a.substr(3,3) << "-" << a.substr(6,4);
        }else{
            cout << "Invalid phone number";
        }
    }else{
        cout << "Invaid phone number";
    }


}