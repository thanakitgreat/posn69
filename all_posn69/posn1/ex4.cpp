#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num;
    cin >> num;
    if(num > 0) cout << "positive";
    else if(num == 0) cout << "zero";
    else cout << "negative";
}