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

B leap(L a){
    if(a % 4 == 0){
        if(a % 100 == 0){
            if(a % 400 == 0 || a == 1500){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S date;
    getline(cin,date);

    vector<L> month31 = {1,3,5,7,8,10,12};

    L year = stoll(date.substr(0,4));
    L month = stoll(date.substr(5,2));
    L day = stoll(date.substr(8,2));

    auto it = find(month31.begin(),month31.end(),month);
    if(date.length() != 10){
        cout << "Invalid date.";
        return 0;
    }

    if(it != month31.end()){
        if(day > 0 && day < 32){
            cout << date.substr(8,2) << "/" << date.substr(5,2) << "/" << date.substr(0,4);
        }else{
            cout << "Invalid Day.";
        }
    }else{
        if((month < 1 || month > 12)){
            cout << "Invalid month.";
        }else{
            if(month != 2){
                if(day > 0 && day < 31){
                    cout << date.substr(8,2) << "/" << date.substr(5,2) << "/" << date.substr(0,4);
                }else{
                    cout << "Invalid Day.";
                }
            }else{
                if(leap(year)){
                    if(day > 0 && day < 30){
                        cout << date.substr(8,2) << "/" << date.substr(5,2) << "/" << date.substr(0,4);
                    }else{
                        cout << "Invalid Day.";
                    }
                }else{
                    if(day > 0 && day < 29){
                        cout << date.substr(8,2) << "/" << date.substr(5,2) << "/" << date.substr(0,4);
                    }else{
                        cout << "Invalid Day.";
                    }
                }
            }
        }
    }
    return 0;
}