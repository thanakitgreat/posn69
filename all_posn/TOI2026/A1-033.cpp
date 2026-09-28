#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b = 0;
    char c;
    cin >> a;

    for (int i = 0; i < a ; i++){
        cin >> c;
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'){
            b++;
        }
    }
    cout << b;
}