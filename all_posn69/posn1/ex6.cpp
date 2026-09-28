#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num; cin >> num;
    if(num >= 80 && num <= 100) cout << "A";
    else if(num >= 70 && num <= 79) cout << "B";
    else if(num >= 60 && num <= 69) cout << "C";
    else if(num >= 50 && num <= 59) cout << "D";
    else cout << "F";
}