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

L multi(L a){
    L total = 1,num;
    cin >> num;
    if(a > 1){
        return total * num * multi(a-1);
    }else{
        return total * num;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    cin >> num;
    cout << "The result is: " << multi(num);
}