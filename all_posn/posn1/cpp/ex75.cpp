#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b;
    getline(cin,a);

    if (a[0] != '0'){
        cout << "Invalid Format";
    }else{
        if ( a.length() != 10 ){
            cout << "Invalid Format";
        }else{
            cout << "+66 (" << a.substr(1,2) << ") " << a.substr(3,3)
            << "-" << a.substr(6,4) ;
        }
    }

}