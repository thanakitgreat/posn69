#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    vector<string> b = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> c = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    cin >> a;
    for(int i = 0 ; i < c.size() ; ++i){
        while (a >= c[i]){
            cout << b[i];
            a -= c[i];
        }
    }
}