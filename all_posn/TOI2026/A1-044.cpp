#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L age,price;
    S day;
    cin >> age >> day;
    if(age >= 0 and age < 5){
        price = 0;
    }else if(age >= 5 and age <= 18){
        price = 100;
    }else if(age > 18 and age < 121){
        price = 150;
    }
    if (day == "Wed") price /= 2;
    cout << price;
}