#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; getline(cin,text);
    if(text[0] == '0' && text.length() == 10){
        cout << text.substr(0,3) << "-" << text.substr(3,3) << "-" << text.substr(6,4);
    }
    else cout << "Invalid phone number";
}