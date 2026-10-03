#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

bool Lp(int year) {
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0) return true;
            else return false;
        }
        else return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    vector<L> day = {31,28,31,30,31,30,31,31,30,31,30,31};
    
}