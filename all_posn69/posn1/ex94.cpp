#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L fibo(L a){
    if(a == 1) return 0;
    else if(a == 2) return 1;
    else return fibo(a-1)+fibo(a-2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,ans; cin >> num;
    ans = fibo(num+1);
    cout << "The Fibonacci value of " << num << " is: " << ans << "\n"
    << "Fibonacci sequence up to " << num << ": ";
    for(L i = 1 ; i <= num+1 ; i++) cout << fibo(i) << " ";
}