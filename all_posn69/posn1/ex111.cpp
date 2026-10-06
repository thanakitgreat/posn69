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
    L left = 0,right = 0; C l = '(',r = ')';
    B stat = true;
    for(C i : tex){
        if(i == l) {left++; text += i;}
        else if(i == r) {right++; text += i;}
    }
    if(left != right){
        for(L i = 0 ; i < text.length() ; i++){
            if(text[i] == l){
                if(brac.empty()) {ans.push_back(l); brac.push(l);}
                else {ans.push_back(r); ans.push_back(l);}
            }else if(text[i] == r){
                if(brac.empty()) {ans.push_back(l); ans.push_back(r);}
                else {brac.pop(); ans.push_back(r);}
            }
        }
        if(!brac.empty()) for(L i=0 ; i<brac.size() ; i++) ans.push_back(r);
    }
    else{
        cout << tex << "\n" << 0;
        return 0; 
    }
    for(C i : ans) cout << i << " ";
    cout << "\n" << ans.size()-text.length();
}