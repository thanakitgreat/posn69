#include <bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int e = 0;
    cin >> c;
    char a[c.length()];
    for (int i = 0 ; i < c.length() ; i++){
        a[i] = c[i];
    }
    for (int i = 0 ; i < c.length() ; i++){
        char *d = &a[i];
        if ( *d == 'a' || *d == 'e' || *d == 'i' || *d == 'o' || *d == 'u' ){
            e++;
        }
    }
    cout << e;
}
