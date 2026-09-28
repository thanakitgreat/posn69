#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string a;
    cin >> a;
    if (a.length() > 1000){
        return 0;
    }
    for (int i = 0 ; i < a.length() ; i++){
        if (i == 0){
            char b = (char)toupper(a[i]);
            cout << b;
        }else{
            cout << a[i];
        }
    }
    return 0;
}