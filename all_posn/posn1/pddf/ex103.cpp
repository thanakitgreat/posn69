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
    
    L num,eve = 0,odd = 0;
    L* ptr = &num;
    for(L i = 0 ; i < 10 ; i++){
        cin >> num;
        if(!(*ptr % 2)){
            eve++;
        }else{
            odd++;
        }
    }
    cout << "Odd number: " << odd << ", Even number: " << eve;
}