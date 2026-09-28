#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,c = 0;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        string b;
        cin >> b;
        if ((b.substr(0,2) == "++" || b.substr(1,2) == "++") && (b[0] == 'X' || b[2] == 'X')){
            c++;
        }else if((b.substr(0,2) == "--" || b.substr(1,2) == "--") && (b[0] == 'X' || b[2] == 'X')){
            c--;
        }
    }
    cout << c;
    return 0;
}