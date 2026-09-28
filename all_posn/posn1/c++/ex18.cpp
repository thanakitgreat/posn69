#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    int b = 0;
    int d = 2;
    do{
        if (a%d ==0){
            b++;
        }
        d++;
    }while(d<a);
    if(b == 0){
        cout << 'y';
    }else{
        cout << 'n';
    }
    return 0;
}