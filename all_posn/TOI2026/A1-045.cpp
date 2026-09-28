#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L d;
    cin >> d;
    if (d <= 1){
        cout << 35;
    }else if(d >= 1 and d <= 10){
        cout << 35 + 5*(d-1);
    }else{
        cout << 80 + 8*(d-10);
    }
}