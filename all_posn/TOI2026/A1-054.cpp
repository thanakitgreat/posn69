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
    
    L time,money;
    C pos;
    cin >> pos >> time >> money;
    L sum = 0; 
    if(pos == 'M'){
        sum += 1500;
        if(time < 5) sum += money * 6 / 100;
        else if(time < 10 && time >= 5) sum += money * 8 / 100;
        else if(time >= 10) sum += money * 10 / 100;
    }else if(pos == 'B'){
        sum += 1000;
        if(time < 5) sum += money * 5 / 100;
        else if(time < 10 && time >= 5) sum += money * 6 / 100;
        else if(time >= 10) sum += money * 8 / 100;
    }else if(pos == 'G'){
        sum += 500;
        if(time < 5) sum += money * 4 / 100;
        else if(time < 10 && time >= 5) sum += money * 5 / 100;
        else if(time >= 10) sum += money * 6 / 100;
    }
    std::cout << sum;
}