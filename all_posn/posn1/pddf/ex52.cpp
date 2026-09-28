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
    
    L box,men,maxCoin,countCoin,curMaxVal = -INF,curMaxInd;
    cin >> box >> men;

    
    L boxes[box];
    for(L i = 0 ; i < box ; i++) cin >> boxes[i];

    for(L i = 0 ; i < men ; i++){
        curMaxInd = -1;
        curMaxVal = -INF;
        for(L j = 0 ; j < box ; j++){
            if(boxes[j] > curMaxVal){
                curMaxVal = boxes[j];
                curMaxInd = j;
            }
        }
        countCoin += curMaxVal;
        boxes[curMaxInd] = -INF;
    }
    cout << countCoin;
}