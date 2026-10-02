#include <bits/stdc++.h>
using namespace std;
typedef string S;

int main(){
    S text; getline(cin,text);
    for(char i : text) {char j = toupper(i); cout << j;}
}