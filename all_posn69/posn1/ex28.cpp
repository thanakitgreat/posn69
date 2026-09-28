#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,sum = 0; cin >> num;
    for(L i = 1 ; i <= num ; i++){
        if(i%2) sum -= i;
        else sum += i;
    }
    cout << sum;
}