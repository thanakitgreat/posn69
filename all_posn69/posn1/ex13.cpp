#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L n1,n2,rem,temp;
    cin >> n1 >> n2;
    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    while(n1%n2 != 0){
        temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }
    cout << n2;
}