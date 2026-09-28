#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L size,num,bad = 0,good = 0;
    cin >> size;
    vector<L> counts;
    for(L i = 0 ; i < size ; i ++){
        cin >> num;
        counts.push_back(num);
        if (num < 10 || num > 100) {
            bad++;
        }else{
            good += num;
        }
    }
    cout << bad << " " << good;
}