#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    S text,del,ins; cin >> text >> del;
    L left,right; cin >> left >> right >> ins;
    size_t pos;
    while ((pos = text.find(del)) != string::npos) {
        text.erase(pos, del.length());
    }
    S ans = "";
    ans += text.substr(0,left);
    for(L i=0 ; i<= right-left ; i++){
        ans += text[right-i];
    }
    ans += text.substr(right+1,text.length()-right);
    S ans1 = "";
    ans1 += ans.substr(0,ans.length()/2);
    ans1 += ins;
    ans1 += ans.substr(ans.length()/2,ans.length()-ans.length()/2);
    cout << ans1 << "\n" << ans1.length();
}