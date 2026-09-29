#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L row,col,in,count = 0;
    cin >> row >> col;
    for(L i = 0 ; i < row*col ; i++){cin >> in; if(in) count++;}
    cout << count;
}