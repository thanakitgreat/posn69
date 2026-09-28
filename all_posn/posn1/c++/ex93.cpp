#include <bits/stdc++.h>
using namespace std;

int a(int b){
    if (b == 0){
        return 1;
    }else if (b > 0){
        return b*a(b-1);
    }
}

int main(){
    int b;
    cin >> b;
    if (b >= 0){
        cout << a(b);
    }else{
        cout << "Factorial is not defined for negative numbers.";
    }
    
}