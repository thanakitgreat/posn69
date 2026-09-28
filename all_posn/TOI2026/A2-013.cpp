#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    C a,c;
    L b,d,e,energy = 0;
    cin >> a >> b >> c >> d >> e;

    if (a == 'H'){
        energy += 5*b;
    }else if(a == 'O'){
        energy += 3*b;
    }else if(a == 'J'){
        energy += 2*b;
    }
    if (c == 'R'){
        if(d == 1){
            energy += 12*e;
        }else if(d == 2){
            energy += 18*e;
        }else if(d == 3){
            energy += 25*e;
        }
    }else if(c == 'T'){
        if(d == 1){
            energy += 15*e;
        }else if(d == 2){
            energy += 20*e;
        }else if(d == 3){
            energy += 30*e;
        }
    }else if(c == 'M'){
        if(d == 1){
            energy += 10*e;
        }else if(d == 2){
            energy += 15*e;
        }else if(d == 3){
            energy += 20*e;
        }
    }
    cout << energy;
}