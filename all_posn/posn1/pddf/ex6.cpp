#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

void check_pos(I a){
    if (a > 79){
        cout << 'A';
    }else if(a > 69){
        cout << 'B';
    }else if(a > 59){
        cout << 'C';
    }else if(a > 49){
        cout << 'D';
    }else{
        cout << 'F';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    I num;
    cin >> num;
    check_pos(num);
}