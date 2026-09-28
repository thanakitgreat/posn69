#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

L bin(L a) {
    L b = 0;
    L c, i = 1;

    while (a != 0) {
        c = a % 2;
        a /= 2;
        b += c * i;
        i *= 10;
    }
    return b;
}

bool limits(L a,L b,L c){
    if (a <= b and b <= c){
        return false;
    }else{
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num;
    cin >> num;
    if (limits(0,num,100000)) return 0;
    cout << bin(num) << "\n";
    cout << oct << num << "\n";
    cout << hex << uppercase << num;
}