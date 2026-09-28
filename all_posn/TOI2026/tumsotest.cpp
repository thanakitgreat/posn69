#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

void printer(string a,bool b){
    if (b){
        cout << a << "\n";
    }else{
        cout << a;
    }
}

L limits(L a, L b,L c){
    if(a > b or b > c) return 0;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L a;
    cin >> a;
    limits(10,a,20);
}