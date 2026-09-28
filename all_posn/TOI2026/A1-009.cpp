#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b ;
    int c = a + b;
    if ( c >= 50 ){
        cout << c << endl << "pass";
    }else{
        cout << c << endl << "fail";
    }
}