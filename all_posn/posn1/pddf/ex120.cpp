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

B cable(vector<L> cables,L startPos,L endPos){
    B stat = true;
    if(abs(startPos - endPos) == 1){
        return stat;
    }else{
        for(L i = startPos + 1 ; i <= endPos - 1 ; i++){
            if(cables[i] > cables[startPos] || cables[i] > cables[endPos]){
                stat = false;
                break;
            }
        }
        return stat;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L tower,count = 0;
    cin >> tower;
    vector<L> cables(tower);
    for(L i = 0 ; i < tower ; i++){
        cin >> cables[i];
    }
    for(L i = 0 ; i < tower ; i++){
        for(L j = i + 1 ; j < tower ; j++){
            if(cable(cables,i,j)) count++;
        }
    }
    
    cout << count;
}