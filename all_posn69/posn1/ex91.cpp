#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L sums(L a){
    L in;
    if(a == 0) return 1;
    cin >> in;
    return in*sums(a-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num; cin >> num;
    cout << "The result is: " << sums(num);
}