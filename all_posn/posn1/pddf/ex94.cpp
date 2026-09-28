#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

L fibo(L a){
    L n1 = 0,n2 = 1;
    if(a == 0){
        return n1;
    }else if(a == 1){
        return n2;
    }else{
        return fibo(a-1) + fibo(a-2);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    cin >> num;
    cout << "The Fibonacci value of " << num << " is: " << fibo(num) << "\n";
    cout << "Fibonacci sequence up to " << num << ": ";
    for(L i = 0 ; i <= num ; i++){
        cout << fibo(i) << " ";
    }
}