#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L code,boy = 0,girl = 0;
    bool pos = true;
    vector<L> codes;
    while(pos){
        cin >> code;
        if(code >= 0){
            codes.push_back(code);
        }else{
            pos = false;
        }
    }
    for(L i = 0 ; i < codes.size() ; i++){
        if (codes[i] % 2 == 1){
            boy++;
        }else{
            girl++;
        }
    }
    cout << boy << " " << girl << " " << codes.size();
}