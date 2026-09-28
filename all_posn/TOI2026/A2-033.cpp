#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    D time1,time2;
    cin >> time1 >> time2;

    L t1 = round(time1*100);
    L t2 = round(time2*100);

    L t_min1 = (t1/100)*60 + t1%100;
    L t_min2 = (t2/100)*60 + t2%100;

    L time_cal = t_min2 - t_min1;
    if(time_cal <= 15){
        cout << "FREE";
        return 0;
    }else if(time_cal <= 60){
        cout << 25;
        return 0;
    }else if(time_cal <= 120){
        cout << 50;
        return 0;
    }else if(time_cal <= 180){
        cout << 80;
        return 0;
    }else if(time_cal <= 240){
        cout << 110;
        return 0;
    }else if(time_cal <= 300){
        cout << 145;
        return 0;
    }else if(time_cal <= 360){
        cout << 180;
        return 0;
    }else if(time_cal <= 1440){
        cout << 250;
        return 0;
    }else{
        cout << "ERROR";
        return 0;
    }
}