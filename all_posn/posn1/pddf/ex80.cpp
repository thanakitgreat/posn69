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
    
    S text;
    getline(cin,text);

    L len = text.length();

    size_t plus = text.find('+');
    size_t minus = text.find('-');
    size_t multi = text.find('*');
    size_t divid = text.find('/');
    D ans = 0,first,second;

    cout << fixed << setprecision(2);
    if(plus != S::npos){
        first = stod(text.substr(0,plus));
        second = stod(text.substr(plus + 1,len - plus));
        ans = first + second;
    }else{
        if(minus != S::npos){
            first = stod(text.substr(0,minus));
            second = stod(text.substr(minus + 1,len - minus));
            ans = first - second;
        }else{
            if(multi != S::npos){
                first = stod(text.substr(0,multi));
                second = stod(text.substr(multi + 1,len - multi));
                ans = first * second;
            }else{
                if(divid != S::npos){
                    first = stod(text.substr(0,divid));
                    second = stod(text.substr(divid + 1,len - divid));
                    ans = first / second;
                }
            }
        }
    }
    cout << ans;
}