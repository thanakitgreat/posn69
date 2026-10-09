#include <bits/stdc++.h>
using namespace std;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    S text,edit= "",ans = ""; B stat = true;
    getline(cin,text);
    for(C i : text){
        if(i != '[' && i != ']')edit += i;
        else{
            if(i == '['){
                if(stat) ans += edit;
                else ans = edit += ans;
                edit = "";
            }else if(i == ']'){
                if(stat) ans += edit;
                else ans = edit += ans;
                edit = "";
            }
        }
    }
    if(stat) ans += edit;
    else ans = edit += ans;
    cout << ans;
}