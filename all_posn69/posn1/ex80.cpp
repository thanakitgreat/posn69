#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    S text; cin >> text;
    L a1 = text.find('+'),a2 = text.find('-'),a3 = text.find('*'),a4 = text.find('/');
    cout << fixed << setprecision(2);
    if(a1 != string::npos) cout << stod(text.substr(0,a1))/1.0+stod(text.substr(a1+1,text.length()-a1-1))/1.0;
    else if(a2 != string::npos) cout << stod(text.substr(0,a2))/1.0-stod(text.substr(a2+1,text.length()-a2-1))/1.0;
    else if(a3 != string::npos) cout << stod(text.substr(0,a3))/1.0*stod(text.substr(a3+1,text.length()-a3-1))/1.0;
    else if(a4 != string::npos) cout << stod(text.substr(0,a4))/1.0/stod(text.substr(a4+1,text.length()-a4-1))/1.0;
    else cout << 0.00;
}