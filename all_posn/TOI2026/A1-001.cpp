#include <bits/stdc++.h>
using namespace std;
typedef string S;
typedef long long L;

int main(){
    S F_name,L_name;
    cin >> F_name >> L_name;
    cout << "Hello " << F_name << " " << L_name << "\n";
    cout << F_name.substr(0,2) << L_name.substr(0,2);
    return 0;
}