#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,sum = 0;
    cin >> num;
    while(num > 0){
        if(!(num % 2)){
            sum += num;
        }else{
            sum -= num;
        }
        num--;
    }
    cout << sum;
}