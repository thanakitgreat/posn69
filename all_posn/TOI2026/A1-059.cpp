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
    
    S startPos,endPos;
    L weight,sum = 0;
    cin >> startPos >> endPos >> weight;
    if(startPos == "BKK"){
        if(endPos == "CNX") sum += 10 + 30*weight;
        else if(endPos == "PKT") sum += 25 + 50*weight;
    }else if(startPos == "CNX"){
        if(endPos == "UBP") sum += 15 + 40*weight;
    }else if(startPos == "UBP"){
        if(endPos == "BKK") sum += 20 + 40*weight;
        else if(endPos == "PKT") sum += 40 + 70*weight;
    }else if(startPos == "PKT"){
        if(endPos == "CNX") sum += 30 + 60*weight;
    }
    if(sum != 0) cout << sum;
    else cout << "Error";
}