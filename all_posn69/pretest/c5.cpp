#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    L price,money;
    vector<L> note = {1000,500,100,50,20};
    vector<L> count = {0,0,0,0,0};
    cin >> price >> money;
    if(money > price){
        L left = money - price;
        for(L i = 0 ; i < 5 ; i++){
            count[i] = left/note[i];
            left %= note[i];
        }
        for(L i = 0 ; i < 5 ; i++) cout << note[i] << " = " << count[i] << endl;
        cout << "coin = " << left;
    }
    else if(money == price) cout << "no change";
    else cout << "no money";
    
}