#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (c*c == a*a + b*b){
        cout << "Right Triangle";
    }else{
        cout << "Not a Right Triangle";
    }
}