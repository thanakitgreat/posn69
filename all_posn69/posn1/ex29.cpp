#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L n1 = 0,n2 = 1,num, temp;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    cout << n1;
}