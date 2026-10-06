#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

bool Lp(int yea) {
    L year = yea-543;
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    vector<L> day = {31,28,31,30,31,30,31,31,30,31,30,31};
    S day1,day2; cin >> day1 >> day2;
    L fs1 = day1.find('/'); L bs1 = day1.rfind('/');
    L fs2 = day2.find('/'); L bs2 = day2.rfind('/');
    L d1 = stoll(day1.substr(0,fs1)), m1 = stoll(day1.substr(fs1+1,bs1-fs1-1));
    L y1 = stoll(day1.substr(bs1+1,4));
    L d2 = stoll(day2.substr(0,fs2)), m2 = stoll(day2.substr(fs2+1,bs2-fs2-1));
    L y2 = stoll(day2.substr(bs2+1,4));
    if(y2 != y1){
        if(m2 > m1){
            if(Lp(y1)){
                
            }
        }
    }
}