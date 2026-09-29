#include <bits/stdc++.h>
using namespace std;
typedef long long L;
const string big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string sma = "abcdefghijklmnopqrstuvwxyz";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num;
    string text,ans="";
    cin >> num;
    cin >> ws;
    getline(cin,text);
    for(char i : text){
        if(!isalpha(i)) ans += i;
        else{
            if(isupper(i)) ans += big[(((static_cast<int>(i))-'A'-num)%26 + 26)%26];
            else ans += sma[(((static_cast<int>(i))-'a'-num)%26 + 26)%26];
        }
    }
    cout << ans;
}