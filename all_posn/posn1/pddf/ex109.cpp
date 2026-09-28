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

B vowel(C a){
    if(a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u') return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text1;
    cin >> text1;
    L count = 0;
    for(L i = 0 ; i < text1.length() ; i++){
        C* ptr = &text1[i];
        if(vowel(*ptr)) count++;
    }
    cout << count;
}