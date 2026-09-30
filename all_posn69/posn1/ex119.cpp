#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S text,in; cin >> text;
    L num; cin >> num;
    B stat = true;
    for(L i = 0 ; i < num ; i++){
        cin >> in;
        if(stat){
            B curstat = false;
            for(L j = 0 ; j <= text.length()-in.length() ; j++){
                if(text.substr(j,in.length()) == in) curstat = true;
            }
            stat = curstat;
        }
    }
    if(stat) cout << "true";
    else cout << "false";
}