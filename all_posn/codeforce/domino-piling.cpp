#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    if (a > b || a > 16 || b > 16 || a < 1 || b < 1){
        return 0;
    }
    int c = (a*b)/2;
    cout << c;
    return 0;
}