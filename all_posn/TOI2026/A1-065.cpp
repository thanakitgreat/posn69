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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S num;
    S text = "";
    vector<S> sym = {"#","/","+","*"};
    for(L i = 0 ; i < 5 ; i++){
        cin >> num;
        S word = "";
        L len = num.length();
        for(L i = 0 ; i < len ; i++){
            if(stoll(num) != 0){
                if(num[i] != '0'){
                    word += sym[i+4-len];
                }
            }else{
                word += "-";
            }
        }
        text += word;
    }
    cout << text;
}