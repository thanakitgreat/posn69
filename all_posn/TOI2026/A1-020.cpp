#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    cin >> a >> b >> c;
    if (a > b and b > c){
        cout << "decreasing";
    }else if(a < b and b < c){
        cout << "increasing";
    }else{
        cout << "neither";
    }
}