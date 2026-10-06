#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

void del_substr(S &t1,S t2){
    while(true){
        L l1 = t1.length(),l2=t2.length();
        B stat = true;
        for(L i=0 ; i<=l1-l2; i++){
            if(t1.substr(i,l2) == t2){
                stat = false;
                t1.erase(i,i+l2);
            }
        }
        if(stat) break;
    }
}

int main(){
    S test = "appleappe";
    del_substr(test,"app");
    cout << test;
}