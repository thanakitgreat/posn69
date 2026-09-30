#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text;
    L up = 0,num = 0;
    getline(cin,text);
    for(C i : text){
        if(isupper(i)) up++;
        if(isdigit(i)) num++;
    }
    cout << up << "\n" << num;
}