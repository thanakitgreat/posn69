#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    L num,renum = 0;
    cin >> num;
    while(num > 0){
        renum *= 10;
        renum += (num % 10);
        num /= 10;
    }
    cout << renum;
}