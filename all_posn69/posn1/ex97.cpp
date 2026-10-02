#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

void hanoi(int e, char towA, char towB, char towC) {
    if (e == 1) {
        cout << "Move crystal ball 1 from tower " << towA << " to tower " << towB << endl;
        return;
    }
    hanoi(e-1, towA, towC, towB);
    cout << "Move crystal ball " << e << " from tower " << towA << " to tower " << towB << endl;
    hanoi(e-1, towC, towB, towA);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num; cin >> num;
    hanoi(num,'A','C','B');
}