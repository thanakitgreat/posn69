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
    
    L num;
    cin >> num;
    L n1 = 0,n2 = 1,temp;
    while(num > 0){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        num--;
    }
    cout << n1;
}