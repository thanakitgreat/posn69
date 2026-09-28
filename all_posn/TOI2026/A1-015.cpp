#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b;
    int c;
    cin >> a >> b >> c;

    if (a.length() > 5 and b.length() > 5){
        cout << a.substr(0,2) << b[b.length()-1] << c%10;
    }else{
        cout << a[0] << c << b[b.length()-1];
    }
}