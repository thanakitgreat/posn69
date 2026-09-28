#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L bowl,size;
    cin >> bowl;
    vector<L> bowls(300);
    for(L i = 0 ; i < bowl ; i++){
        cin >> size;
        bowls[size-1]++;
    }
    sort(bowls.begin(),bowls.end());
    cout << bowls[299];

}