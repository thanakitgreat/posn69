#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    if (a < 1 || a > 100){
        return 0;
    }else if(a%2 == 0 && a > 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}