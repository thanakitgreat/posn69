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

void hanoi(L num,C t1, C t2,C t3){
    if (num == 1) {
        cout << "Move crystal ball 1 from tower " << t1 << " to tower " << t2 << endl;
        return;
    }
    hanoi(num-1, t1, t3, t2);
    cout << "Move crystal ball " << num << " from tower " << t3 << " to tower " << t2 << endl;
    hanoi(num-1, t3, t2, t1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L ball;
    cin >> ball;
    hanoi(ball,'A','B','C');
}