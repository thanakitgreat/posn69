#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char a;
    int b;
    cin >> a >> b;
    if (a == 'H' and b == 4567){
        cout << "safe unlocked";
    }else if(a != 'H' and b == 4567){
        cout << "safe locked - change char";
    }else if(a == 'H' and b != 4567){
        cout << "safe locked - change digit";
    }else{
        cout << "safe locked";
    }
}