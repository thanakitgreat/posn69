#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text;
    getline(cin,text);
    stringstream num(text);
    L nums = 0;
    D sum = 0,in;
    while(num >> in) {nums++; sum += in;}
    if(nums == 0) cout << fixed << setprecision(1) << 0.0 << "\n" << 0 << "\n" << 0.0;
    else cout << fixed << setprecision(1) << sum << "\n" << nums << "\n" << sum/nums;
}