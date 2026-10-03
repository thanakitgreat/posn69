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

    S text,ans=""; getline(cin,text);
    for(C i : text){
        if(isalpha(i)){
            C j = tolower(i);
            ans += j;
        }
    } 
    B stat = true;
    for(L i=0 ; i<ans.length()/2 ; i++){
        if(ans[i] != ans[ans.length()-i-1]){
            stat = false;
            break;
        }
    }
    if(stat) cout << "YES";
    else cout << "NO";
}