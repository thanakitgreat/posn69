#include <iostream>
using namespace std;

typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b;
    cin >> a >> b;
    if (a < 2 || a > 1000000000 || b < 1 || b > 50){
        return 0;
    }
    for (int i = 0 ; i < b ; i++){
        if (a%10 != 0){
            a--;
        }else{
            a /= 10;
        }
    }
    cout << a;
    return 0;
}