#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    vector<char> b;
    int d = 0;
    char e;
    for (int c = 0; c < a*2;c++){
       cin >> e;
       b.push_back(e); 
    }
    for (int c = 0; c < 2*a;c += 2){
        if (b.at(c) == 'C'){
            if (b.at(c+1) == '1'){
                d += 5;
            }else{
                d -= 2;
            }
        }else if(b.at(c) == 'D'){
            if (b.at(c+1) == '1'){
                d += 10;
            }
        }else if(b.at(c) == 'B'){
            if (b.at(c+1) == '1'){
                if (d >= 20){
                    d += 15;
                }
            }
        }
    }
    cout << d;
}