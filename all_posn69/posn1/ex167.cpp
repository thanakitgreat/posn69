#include <bits/stdc++.h>
using namespace std;
typedef long long L;
const string big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string sma = "abcdefghijklmnopqrstuvwxyz";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string text,ans="";
    getline(cin,text);
    for(char i : text){
        if(!isalpha(i)) ans += i;
        else{
            if(isupper(i)) ans += big[25-(((static_cast<int>(i))-'A'))];
            else ans += sma[25-(((static_cast<int>(i))-'a'))];
        }
    }
    cout << ans;
}