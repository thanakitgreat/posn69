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
    L num,sum = 0;
    L* ptr = &sum;
    for(L i = 0 ; i < 5 ; i++) {cin >> num; sum += num;}
    cout << *ptr;
}