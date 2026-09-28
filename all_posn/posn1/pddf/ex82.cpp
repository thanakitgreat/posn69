#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
typedef unsigned long UL;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    getline(cin,text);

    UL hexer = text.find('%');
    while(hexer != S::npos){
        S num = text.substr(hexer+1,2);
        C d = (C)stoul(num, nullptr, 16);
        text.replace(hexer,3,S(1,d));
        hexer = text.find('%',hexer + 1);
    }
    cout << text;
}