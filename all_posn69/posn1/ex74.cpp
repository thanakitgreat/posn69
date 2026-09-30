#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    S text;
    getline(cin,text);
    L in = text.rfind('@');
    if(in == string::npos) cout << "Invalid email format.";
    else cout << text.substr(0,in) << "\n" << text.substr(in+1,text.length()-in-1);
}