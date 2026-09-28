#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L num;
    S no;
    cin >> num;
    for(L i = 1 ; i <= num ; i++){
        cin >> no;
        if(no == "2"){
            cout << "T\n";
        }else{
            L n = no.back() - '0';
            if(n%2 == 1) cout << "T\n";
            else cout << "F\n";
        }
    }
}