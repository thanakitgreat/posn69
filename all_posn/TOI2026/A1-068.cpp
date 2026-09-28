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
    
    L round;
    B stat = true;
    D score,sum = 0;
    cin >> round;

    if(round < 1 or round > 1000) return 0;

    for(L i = 0 ; i < round ; i++){
        cin >> score;
        if(score < 0 or score > 100) return 0;
        if(score < 50) stat = false;
        sum += score;
    }
    D avg = sum/round;
    cout << fixed << setprecision(1) << avg << "\n";
    if(avg >= 60.0){
        if(stat){
            cout << "PASS";
        }else{
            cout << "FAIL";
        }
    }else{
        cout << "FAIL";
    }
}