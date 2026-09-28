#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;
    if (1 <= a and a <= 3){
        while (a > 0){
            cout << 'I';
            a--;
        }
    }else if (a == 4){
        cout << "IV";
    }else if (5 <= a and a <= 8){
        cout << 'V';
        a -= 5;
        while (a > 0){
            cout << 'I';
            a--;
        }
    }else if(a == 9){
        cout << "IX";
    }else if (a < 0){
        cout << "Error : Please input positive number";
    }else if(a > 9 or a == 0){
        cout << "Error : Out of range";
    }
}