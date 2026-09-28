#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    char b;
    cin >> a >> b;
    int c = (a%10)*10 + a/10;
    if (b == '+'){
        cout << a << " + " << c << " = "<< a+c;
    }else{
        cout << a << " * " << c << " = "<< a*c;
    }
}