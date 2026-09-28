#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int b = (a/10)*10;

    while (b >= 0){
        cout << b << " ";
        b -= 10;
    }
}