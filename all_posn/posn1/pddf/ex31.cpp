#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;

B check35(L a){
    if(a%3 == 0 or a%5 == 0){
        return true;
    }else{
        return false;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,sum = 0;
    cin >> num;
    while(num > 0){
        if(check35(num)){
            sum += num;
        }
        num--;
    }
    cout << sum;
}