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

    stack<C> brac;
    deque<C> ans;
    S tex,text =""; getline(cin,tex);
    for(C i : tex) if(i == '('  || i == ')') text += i;
    for(L i = 0 ; i < text.length() ; i++){
        if(text[i] == '('){
            
        }else if(text[i] == ')'){
            
        }
    }
    for(C i : ans) cout << i << " ";
}