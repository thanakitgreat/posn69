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
    
    S text,censer,word;
    getline(cin,text);
    getline(cin,censer);
    
    size_t found = text.find(censer);
    while(found != S::npos){
        text.replace(found, censer.size(), string(censer.size(),'*'));
        found = text.find(censer,found + 1);
    }
    cout << text;
    
}