#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    L num,ans = 1;
    cin >> num;
    if(num != 0){
        do{
            ans *= num;
            num--;
        }while(num > 0);
    }
    cout << ans;
}