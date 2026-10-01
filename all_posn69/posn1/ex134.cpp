#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    D mb,hb,mt,st; cin >> mb >> hb >> mt >> st;
    D enerB = mb*hb*9.81*1000.0, enerT = mt*st*st/2.00;
    if(abs(enerB-enerT) < 0.1) cout << "=";
    else if(enerB > enerT) cout << "Brr Brr Patapim " << fixed << setprecision(2) << enerB-enerT << " Joules";
    else if (enerB < enerT) cout << "Tung Tung Tung Sahur " << fixed << setprecision(2) << enerT-enerB << " Joules";
}