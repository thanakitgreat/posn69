#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L unit;
    double price = 0;
    cin >> unit;

    if(unit < 1 or unit > 10000){
        return 0;
    }

    if(unit < 1){
        return 0;
    }else if(unit <= 10){
        price += unit*5;
    }else if(unit <= 50){
        price += 50+(7*(unit-10));
    }else if(unit <= 100){
        price += 330+(10*(unit-50));
    }else if(unit <= 200){
        price += 830+((unit-100)*12);
    }else if(unit <= 10000){
        price += 2030+(15*(unit-200));
    }else{
        return 0;
    }
    price *= 1.07 ;
    price += unit * 0.5;
    cout << fixed << setprecision(2) << price;
    return 0;
}