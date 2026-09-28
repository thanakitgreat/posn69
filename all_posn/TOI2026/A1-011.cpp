#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    int b = 1;
    getline(cin,a);

    for (int d = 0 ; d <= a.length()-1 ; d++){
        if (a[d] == a[d+1]){
            b++;
        }else{
            cout << b << a[d];
            b = 1;
        }
    }
}