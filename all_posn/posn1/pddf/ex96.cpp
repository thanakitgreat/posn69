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

L gcd(L first,L second){
    if(second == 0){
        return first;
    }else{
        return gcd(second,first%second);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num1,num2;
    cin >> num1 >> num2;
    cout << num1 * num2 / gcd(num1,num2);
}