#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    L num,ans = 0;
    cin >> num;
    while(num > 0){
        ans *= 10;
        ans += num%10;
        num /= 10;
    }
    cout << ans;
}