#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    L upper = 0,num = 0;
    getline(cin,text);

    for(L i = 0 ; i < text.length() ; i++){
        if(isupper(text[i])){
            upper++;
        }else if(isdigit(text[i])){
            num++;
        }
    }
    cout << upper << "\n" << num;
}