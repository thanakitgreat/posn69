#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a >> b;
    if (a == 1 or a == 2){
        cout << "winter";
    }else if(a == 3){
        if (b < 21){
            cout << "winter";
        }else{
            cout << "spring";
        }
    }else if(a == 4 or a == 5){
        cout << "spring";
    }else if(a == 6){
        if (b < 21){
            cout << "spring";
        }else{
            cout << "summer";
        }
    }else if(a == 7 or a == 8){
        cout << "summer";
    }else if(a == 9){
        if (b < 21){
            cout << "summer";
        }else{
            cout << "fall";
        }
    }else if(a == 10 or a == 11){
        cout << "fall";
    }else if(a == 12){
        if (b < 21){
            cout << "fall";
        }else{
            cout << "winter";
        }
    }
}