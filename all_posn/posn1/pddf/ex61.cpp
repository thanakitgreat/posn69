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
    
    L num,test,score = 0;
    C type;
    cin >> test;
    for(L i = 0 ; i < test ; i++){
        cin >> type >> num;
        if(type == 'C'){
            if(num) score += 5;
            else score -= 2;
        }else if(type == 'D'){
            if(num) score += 10;
        }else if(type == 'B'){
            if(score >= 20 && num) score += 15;
        }
    }
    cout << score;
}