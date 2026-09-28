#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L input,sum = 0,odd = 0,even = 0,num;
    cin >> input;
    for(L i = 0 ; i < input ; i++){
        cin >> num;
        sum += num;
        if (num%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout << "SUM " << sum << "\n";
    cout << "EVEN " << even << "\n";
    cout << "ODD " << odd << "\n";
}