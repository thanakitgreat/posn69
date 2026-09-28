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
    
    L num;
    L arr1[5];
    L arr2[5];
    for(L i = 0 ; i < 5 ; i++){
        cin >> arr1[i];
        L *ptr = &arr1[i];
        arr2[i] = *ptr;
    }
    for(L i = 0 ; i < 5 ; i++){
        cout << arr2[i] << " ";
    }
}