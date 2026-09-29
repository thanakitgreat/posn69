#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    map<L,L> test;
    L num,codes,score,sum = 0;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> codes >> score;
        auto it = test.find(codes);
        if(it == test.end()) test[codes] = score;
        else test[codes] = max(test[codes],score);
    }
    for(auto i : test) sum += i.second;
    cout << sum;
}