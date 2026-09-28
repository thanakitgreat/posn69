#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<L> tri;

    L side;
    for(L i = 0 ; i < 3 ; i++){
        cin >> side;
        tri.push_back(side);
    }
    sort(tri.begin(),tri.end());
    cout << tri[2];
}