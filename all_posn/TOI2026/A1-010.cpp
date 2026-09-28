#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    char b;
    cin >> a >> b;
    if (a < 18 or b == 's' or b == 'S'){
        cout << 20;
    }else{
        cout << 50;
    }
}