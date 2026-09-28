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

B wordCheck(S text,S word){
    L textLen = text.length();
    L wordLen = word.length();
    B stat = false;
    for(L i = 0 ; i < textLen - wordLen ; i++){
        S test = text.substr(i,wordLen);
        if(word == test){
            stat = true;
            break;
        }
    }
    return stat;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S text,word;
    B stat = true;
    L num;
    getline(cin,text);
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> word;
        if(!(wordCheck(text,word))){
            stat = false;
            break;
        }
    }
    if(stat) cout << "true";
    else cout << "false";
}