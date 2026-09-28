#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    if (a > 0){
        for (int i = 0 ; i < a ; i++){
            cout << "*";
        }
    }
    if (a-2 > 0){
        cout << endl;
        for (int i = 0 ; i < a-2 ; i++){
            cout << "*";
        }
    }
    if (a-4 > 0){
        cout << endl;
        for (int i = 0 ; i < a-4 ; i++){
            cout << "*";
        }
    }
}