#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L odd(L a){
    L sum = 0;
    while(a > 0){
        if((a%10)%2 == 1) sum += a%10;
        a /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L rune,num,lev;
    cin >> rune;
    vector<L> pows;
    for(L i = 0 ; i < rune ; i++){
        cin >> num >> lev;
        if(lev == 1) pows.push_back((num*2)+odd(num));
        else if(lev == 2) pows.push_back((num*3)+(odd(num)*2));
        else if(lev == 3) pows.push_back(num+(odd(num)*3));
    }
    for(L i : pows) cout << i << "\n";
}