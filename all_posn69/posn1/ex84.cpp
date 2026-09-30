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
    
    S text; getline(cin,text); L sum = 0;
    for(C i : text) if(isdigit(i)) sum += (i - '0');
    cout << sum;
}