#include <bits/stdc++.h>
using namespace std;

int a(int b){
    if (b == 0){
        return 0;
    }else if (b == 1){
        return 1;
    }else{
        return a(b-1)+a(b-2);
    }
}

int main(){
    int b;
    cin >> b;
    cout << "The Fibonacci value of " << b << " is: " << a(b) << endl;
    cout << "Fibonacci sequence up to " << b << ": ";
    for (int i = 0 ; i <= b ; i++){
        cout << a(i) << " ";
    }
    
}