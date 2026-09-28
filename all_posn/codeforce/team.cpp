#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d,f = 0;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        cin >> b >> c >> d;
        int e = b + c + d;
        if (e >= 2){
            f++;
        }
    }
    cout << f;
    return 0;
}