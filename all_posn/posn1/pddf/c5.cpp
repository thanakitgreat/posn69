#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    L price,paid;
    cin >> price >> paid;
    vector<L> note = {1000,500,100,50,20};
    L left = paid-price;
    if(left > 0){
        for(L i = 0 ; i < 5 ; i++){
            cout << note[i] << " = " << left/note[i] << "\n";
            left -= (left/note[i])*note[i];
        }
        cout << "coin = " << left;
    }else if(left == 0){
        cout << "no change";
    }else{
        cout << "no money";
    }
}