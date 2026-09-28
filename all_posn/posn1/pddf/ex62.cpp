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
    
    map<L,L> scores;
    L tests,code,score,sum = 0;
    cin >> tests;
    for(L i = 0 ; i < tests ; i++){
        cin >> code >> score;
        auto it = scores.find(code);
        if(it != scores.end()){
            scores[code] = max(scores[code],score);
        }else{
            scores[code] = score;
        }
    }
    for(auto it = scores.begin() ; it != scores.end() ; ++it){
        sum += it->second;
    }
    cout << sum;
}