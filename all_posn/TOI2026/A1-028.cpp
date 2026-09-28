#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    getline(cin,a);

    for (int i = a.length()-1 ; i >= 0 ; i--){
        cout << a[i];
    }
}