#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    for (int i = 1 ; i <= a ; i++){
        if (i%5 != 0){
            cout << "*";
        }else{
            cout << 'X';
        }
    }
}