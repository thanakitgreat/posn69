#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L seat,age,num;
    S line;
    cin >> seat;
    cin.ignore();
    while(getline(cin,line) && !line.empty()){
        SS lines(line);
        lines >> age >> num;
        L sum = 0;
        if(age < 15){
            cout << -1 << "\n";
        }else{
            sum += num*150;
            if(age >=15 && age <= 22) sum *= 0.8;
            else if(age >= 60) sum /= 2;
            if(seat - num >= 0){
                seat -= num;
                cout << sum << " " << seat << "\n";
            }else{
                cout << -2 << "\n";
            }
        }
    }      
}
