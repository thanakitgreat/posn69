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
        if (*d > 96){
            char f = *d-32;
            cout << f;
        }else{
            cout << *d;
            
        }
    }
}
