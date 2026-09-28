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
    
    L pen,book,box,sum = 0;
    cin >> pen >> book >> box;
    sum += pen*25 + book*40 + box*55;
    if(pen + book + box >= 3){
        sum = sum*90/100;
    }
    cout << sum;
}