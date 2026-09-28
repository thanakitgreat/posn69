#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    L num; cin >> num;
    while(num > 10) num /= 10;
    cout << num;
}