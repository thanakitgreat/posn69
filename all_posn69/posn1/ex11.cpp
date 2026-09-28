#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num,sum = 0;
    cin >> num;
    while(num > 0){ sum += num; num--;}
    cout << sum;
}