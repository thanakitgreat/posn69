#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string a;
    cin >> a;
    int b = 0,c = 0;
    if (a.length() < 1 || a.length() > 100){
        return 0;
    }
    for (char d : a){
        int f = d;
        if (f < 91){
            b++;
        }else{
            c++;
        }
    }
    if (b > c){
        for (char d : a){
            char e = toupper(d);
            cout << e;
        }
    }else{
        for (char d : a){
            char e = tolower(d);
            cout << e;
        }
    }
    return 0;
}