#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

bool check(S a,S b){
    vector<C> c,d;
    for(C i : a) c.push_back(tolower(i)); for(C i : b) d.push_back(tolower(i));
    sort(c.begin(),c.end()); sort(d.begin(),d.end());
    if(c == d) return true;
    else return false;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text,wor,old,mai,ans = "";
    getline(cin,text);
    cin >> old >> mai;
    stringstream word(text);
    while(word >> wor){
        if(check(wor,old)) ans += mai;
        else ans += wor;
        ans += " ";
    }
    cout << ans;
}