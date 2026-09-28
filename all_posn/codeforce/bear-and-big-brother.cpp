#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a,b,c = 0;
    cin >> a >> b;
    if (a > 10 || b > 10 || a < 1 || b < 1 || a > b){
        return 0;
    }
    while (a <= b){
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c;

    return 0;
}