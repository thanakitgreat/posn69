#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L a;
    cin >> a;
    for(L i = 1 ; i <= 12 ; i++){
        cout << a << " * " << i << " = " << a*i << "\n";
    }
    return 0;
}