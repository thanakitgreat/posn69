#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    S text,cen;
    getline(cin,text);
    cin >> cen;
    L in = text.find(cen);
    while(true){
        if(in != string::npos){
            for(L i = in ; i < in + cen.length() ; i++){
                text[i] = '*';
            }
        }
        in = text.find(cen);
        if(in == string::npos) break;
    }
    cout << text;
}