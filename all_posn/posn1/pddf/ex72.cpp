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
    L count = 1;
    getline(cin,text);

    L len = text.length();

    for(L i = 0 ; i < len ; i++){
        if(text[i] == text[i + 1]){
            count++;
        }else if((text[i] != text[i + 1]) || i == len - 1){
            cout << count << text[i];
            count = 1;
        }
    }
}