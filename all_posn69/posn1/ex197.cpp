#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    S text; L num;
    cin >> num; cin >> ws;
    getline(cin,text);
    for(char i : text) {char j = i+num; cout << j;}
}