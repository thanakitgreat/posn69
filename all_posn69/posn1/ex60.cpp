#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,sum = 0; cin >> num;
    vector<L> pos(num);
    for(L i = 0 ; i < num ; i++){cin >> pos[i]; sum += pos[i];}
    cout << sum;

}