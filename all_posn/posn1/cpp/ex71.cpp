#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b;
    getline(cin,a);

    for (int d = 0 ; d < a.length() ; d++){
        if (a[d] == '.'){
            b = d;
        }
    }
    cout << a.substr(0,b) << endl;
    cout << a.substr(b+1,a.length()-b);
}