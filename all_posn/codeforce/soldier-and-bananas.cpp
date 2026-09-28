#include <iostream>
#include <cmath>
using namespace std;

typedef int I;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L a,b,c;
    cin >> a >> b >> c;
    if (a < 1 || c < 1 || a > 1000 || c > 1000 || b < 0 || b > 1000000000){
        return 0;
    }
    L d = (((c+1)*c)/2)*a;
    L e = b - d;
    if (e < 0){
        cout << abs(e);
    }else{
        cout << 0;
    }
    return 0;
}