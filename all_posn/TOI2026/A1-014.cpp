#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    if (a <= b and a <= c){
        cout << a;
    }else if(b <= a and b <= c){
        cout << b;
    }else if(c <= a and c <= b){
        cout << c;
    }
}