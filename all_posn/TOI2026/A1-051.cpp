#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<char> letters = {'z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};
    L move;
    S code;
    cin >> code >> move;
    for(int i = 0 ; i < code.length() ; i++){
        L let = code[i] - 96;
        cout << letters.at((let+move)%26);
    }
}