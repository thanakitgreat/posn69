#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    if (a >= 5 and b >= 20 and c >= 25){
        cout << "pass";
    }else{
        cout << "fail";
    }
}