#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    char stat,cor;
    L num,sum = 0; cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> stat >> cor;
        if(stat == 'C'){
            if(cor == '1') sum += 5;
            else sum -= 2;
        }
        else if(stat = 'D') if(cor == '1') sum += 10;
        else if(stat = 'B' && sum >= 20 && cor == '1') sum += 15;
    }
    cout << sum;
}