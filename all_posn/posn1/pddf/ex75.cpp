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
    
    S phoneNum;
    getline(cin,phoneNum);
    if(phoneNum[0] == '0' && phoneNum.length() == 10){
        cout << "+66 (" << phoneNum.substr(1,2) << ") "
        << phoneNum.substr(3,3) << "-" << phoneNum.substr(6,4);
    }else{
        cout << "Invalid Format";
    }
}