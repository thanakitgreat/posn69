#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b=1;
    cin >> a;

    while (a > 0){
        b *= a;
        a--;
    }
    cout << b;
}