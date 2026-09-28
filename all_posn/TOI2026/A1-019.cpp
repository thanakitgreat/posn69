#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b and b == c){
        cout << "all the same";
    }else if(a != b and b != c and a != c){
        cout << "all different";
    }else{
        cout << "neither";
    }
}