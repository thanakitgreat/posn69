#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,sum = 0;
    do{
        cin >> num;
        if(num != -1) sum += num;
        else break;
    }while(true);
    cout << sum;
}