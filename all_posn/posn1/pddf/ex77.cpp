#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    S acro = "";
    getline(cin,text);
    L len = text.length();

    for(L i = 0 ; i < len ; i++){
        if(isupper(text[i])) acro += text[i];
    }
    cout << acro;
}