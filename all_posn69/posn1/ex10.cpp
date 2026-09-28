#include <bits/stdc++.h>
using namespace std;
typedef long long L;

bool checkprime(L a){
    bool stat = true;
    if(a == 1) stat = false;
    else if(a > 2){
        L i = 2;
        while(i <= a/2){
            if(a % i == 0){
                stat = false;
                break;
            }
            i++;
        }
    }
    return stat;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num; cin >> num;
    if(checkprime(num)) cout << "Prime";
    else cout << "Not Prime";
}