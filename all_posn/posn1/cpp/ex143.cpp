#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int g = 3600*a + 60*b + c - 3600*d - 60*e - f;
    if (g > 0){
        cout << "Team 2 performed better";
    }else if(g < 0){
        cout << "Team 1 performed better";
    }else if(g == 0){
        cout << "Both teams performed equally";
    }
}