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

L magic(L power,L id){
    L total = 0;
    if(id == 1){
        total += power * 2;
        while(power > 0){
            total += (power % 10);
            power /= 100;
        }
        return total;
    }else if(id == 2){
        total += power * 3;
        while(power > 0){
            total += ((power % 10) * 2);
            power /= 100;
        }
        return total;
    }else if(id == 3){
        total += power;
        while(power > 0){
            total += ((power % 10) * 3);
            power /= 100;
        }
        return total;
    }else{
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L test,power,id;
    cin >> test;
    while(test > 0){
        cin >> power >> id;
        cout << magic(power,id) << "\n";
        test--;
    }
}