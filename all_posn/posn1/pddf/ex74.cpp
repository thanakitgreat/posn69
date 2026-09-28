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
    getline(cin,text);
    
    size_t found = text.find('@');
    if(found != S::npos){
        cout << text.substr(0,found) << "\n";
        cout << text.substr(found + 1, text.length() - found);
    }else{
        cout << "Invaild email format.";
    }
    
}