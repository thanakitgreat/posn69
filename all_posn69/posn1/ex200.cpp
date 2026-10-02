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
    
    S text;L num = 0; getline(cin,text);
    for(C i : text) if(isupper(i)) num++;
    cout << num;
}