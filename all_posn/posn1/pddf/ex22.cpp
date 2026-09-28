#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;
typedef stringstream SS;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L count = 0,num;
    cin >> num;

    do{
        num /= 2;
        count++;
        
    }while(num > 1);
    cout << count;
    
}