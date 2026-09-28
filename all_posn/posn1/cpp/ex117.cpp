#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string c,e,f;
    cin >> c;
    int d = c.length()/2;
    if (c.length()%2 == 0){
        e = c.substr(0,d);
        f = c.substr(d);
        reverse(e.begin(),e.end());
        reverse(f.begin(),f.end());
        cout << e << f;
    }else{
        e = c.substr(0,d);
        f = c.substr(d+1);
        reverse(e.begin(),e.end());
        reverse(f.begin(),f.end());
        cout << e << c[d] << f;
    }
}