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
    
    S startText;
    S newText = "";
    getline(cin,startText);
    L len = startText.length();
    if(len % 2){
        for(L i = len/2 -1 ; i >= 0 ; i--) newText += startText[i];
        newText += startText[len/2];
        for(L i = len -1 ; i > len/2 ; i--) newText += startText[i];
    }else{
        for(L i = len/2 -1 ; i >= 0 ; i--) newText += startText[i];
        for(L i = len-1 ; i >= len/2 ; i--) newText += startText[i];
    }
    cout << newText;
}