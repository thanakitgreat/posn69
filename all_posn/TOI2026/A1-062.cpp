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

B checkprime(L a){
    B stat = true;
    if(a == 1){
        stat = false;
    }else if(a > 2){
        L i = 2;
        while(i <= a/2){
            if(a % i == 0){
                stat = false;
                break;
            }
            i++;
        }
    }
    return stat;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L start,end,count = 0;
    cin >> start >> end;
    for(L i = start ; i <= end ; i++){
        if(checkprime(i)){
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal primes: " << count;
}