#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b = 0;
    getline(cin,a);
    for (int d = 0 ; d < a.length() ; d++){
        if (isdigit(a[d])){
            b += (a[d] - '0') ;
        }
    }
    cout << b << endl;
    
    return 0;
}