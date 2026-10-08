#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

bool is_equal(D val, D ans) {
    return abs(val - ans) < 1e-6;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L ans,n1,n2,count = 0;
    cin >> ans >> n1 >> n2;
    if(n1+n2 == ans) count++;
    if(n1-n2 == ans) count++;
    if(n1*n2 == ans) count++;
    if(n2 != 0 && (n1/n2 == ans)) count++;
    if(n2 != 0 && (n1%n2 == ans)) count++;
    if(is_equal(pow(n1,n1),(D)ans)) count++;
    cout << count;
} 