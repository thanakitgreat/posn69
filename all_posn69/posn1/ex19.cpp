#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,dig = 0;
    cin >> num;
    do{
        dig++;
        num /= 10;
    }while(num > 0);
    cout << dig;
}
