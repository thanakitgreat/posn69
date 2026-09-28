#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b;
    double c = 0;
    getline(cin,a);
    cout << fixed << setprecision(2);
    for (int d = 0 ; d < a.length() ; d++){
        if (a[d] == '+'){
            b = d;
            c = stod(a.substr(0,b)) + stod(a.substr(b+1,a.length()-b));
        }else if(a[d] == '-'){
            b = d;
            c = stod(a.substr(0,b)) - stod(a.substr(b+1,a.length()-b));
        }else if(a[d] == '*'){
            b = d;
            c = stod(a.substr(0,b)) * stod(a.substr(b+1,a.length()-b));
        }else if(a[d] == '/'){
            b = d;
            c = stod(a.substr(0,b)) / stod(a.substr(b+1,a.length()-b));
        }
    }
    cout << c;
}