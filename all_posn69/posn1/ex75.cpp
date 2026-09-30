#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S num;
    cin >> num;
    if(num[0] == '0' && num.length() == 10){
        cout << "+66 (" << num.substr(1,2) << ") " << num.substr(3,3) << "-" << num.substr(6,4);
    }
    else cout << "Invalid Format";
}