#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b = 0;
    getline(cin,a);

    for (int i = a.length()-1 ; i >= 0 ; i--){
        if (a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'u' or a[i] == 'o'){
            b++;
        }
    }
    cout << b;
}