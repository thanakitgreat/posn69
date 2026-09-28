#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b = 0;
    cin >> a;

    for (int i = 0 ; i <= a ; i++){
        b += i*i;
    }
    cout << b;
}