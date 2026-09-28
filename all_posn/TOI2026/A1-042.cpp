#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L x = 0,y = 0;
    S a;
    cin >> a;
    for(char b : a){
        if(b == 'N'){
            y++;
        }else if(b == 'S'){
            y--;
        }else if(b == 'W'){
            x--;
        }else if(b == 'E'){
            x++;
        }
    }
    cout << x << " " << y << " " << abs(x)+abs(y);
}