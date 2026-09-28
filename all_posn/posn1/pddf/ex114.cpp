#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

void repeat(S text){
    L len = text.length();
    L minLen = len;

    for(L curLen = 1 ; curLen < len ; curLen++){
        B stat = true;
        if(len % curLen != 0){
            continue;
        }else{
            for(L i = 0 ; i < len ; i += curLen){
                S ref = text.substr(0,curLen);
                S test = text.substr(i,curLen);
                if(ref != test){
                    stat = false;
                    break;
                }
            }
            if(stat){
                minLen = curLen;
                break;
            }
        }
    }    
    cout << "[" << text.substr(0,minLen) << " , " << len/minLen << "]";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    getline(cin,text);
    repeat(text);
    
}