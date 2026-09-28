#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a,b = 0;
    cin >> a;
    if (a > 1000000 || a < 1){
        return 0;
    }
    while (a >= 5){
        a -= 5;
        b++;
    }
    while (a >= 4){
        a -= 4;
        b++;
    }
    while (a >= 3){
        a -= 3;
        b++;
    }
    while (a >= 2){
        a -= 2;
        b++;
    }
    while (a >= 1){
        a -= 1;
        b++;
    }
    cout << b;
    return 0;
}