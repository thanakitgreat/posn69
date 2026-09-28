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

    
    vector<C> chars;

    size_t found = text.find(" ");
    while(found != S::npos){
        text.erase(found, 1);
        found = text.find(" ",found);
    }
    L len = text.length();

    for(L i = 0 ; i < len ; i++){
        if(isdigit(text[i])){
            chars.push_back(text[i]);
        }else{
            if(isalpha(text[i])){
               chars.push_back(tolower(text[i])); 
            }
        }
    }
    B stat = true;
    for(L i = 0 ; i < len/2 ; i++){
        if(chars[i] != chars[len-i-1]){
            stat = false;
            break;
        }
    }
    if(stat){
        cout << "YES";
    }else{
        cout << "NO";
    }
}