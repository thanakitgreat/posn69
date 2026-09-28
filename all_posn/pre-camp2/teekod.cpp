#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef char C;
typedef bool B;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S text,edit = "",temp = "";
    B Rcur = true;
    getline(cin,text);
    for(L j = 0 ; j < text.length() ; j++){
        C i = text[j];
        if(i == '['){
            if(Rcur) edit += temp;
            else edit = temp + edit;
            temp = "";
            Rcur = false;
        }else if(i == ']'){
            if(!Rcur) edit = temp + edit;
            else edit += temp;
            temp = "";
            Rcur = true;
        }else{
            temp += i;
        }
    }
    if(Rcur) edit += temp;
    else edit = temp + edit;
    cout << edit;
}