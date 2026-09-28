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
    
    L num,sum = 1;
    cin >> num;
    if(num != 0){
        do {
            sum *= num;
            num--;
        }while (num > 0);
        cout << sum;
    }else{
        cout << 1;
    }
}
