#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    string b;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        if (b.length() <= 10){
            cout << b << endl;
        }else{
            cout << b[0] << b.length()-2 << b[b.length()-1] << endl;
        }
    }
    return 0;
}