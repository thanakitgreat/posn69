#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L length,width,floor,price;
    cin >> length >> width >> floor >> price;
    cout << (length+width)*2*floor << "\n";
    cout << (length+width)*2*floor*price;
    return 0; 
}