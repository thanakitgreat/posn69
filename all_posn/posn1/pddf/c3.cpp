#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    L num,total = 1;
    cin >> num;
    do{
        total *= num;
        num--;
    }while(num >= 1);
    cout << total;
}