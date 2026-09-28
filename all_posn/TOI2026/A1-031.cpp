#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    if (a.length() == 4){
        cout << a[0] << ',' << a.substr(1,3);
    }else if(a.length() == 5){
        cout << a.substr(0,2) << ',' << a.substr(2,3);
    }else{
        cout << a.substr(0,3) << ',' << a.substr(3,3);
    }
}