#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    S text,ans=""; cin >> text;
    S* ptr = &ans;
    for(C i : text){
        if(isupper(i)) ans += i;
        else ans += toupper(i);
    }
    cout << ans;
}