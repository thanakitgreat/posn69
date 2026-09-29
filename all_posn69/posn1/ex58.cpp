#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,in,count = 0,sum = 0;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> in;
        if(in < 10 || in > 100) count++;
        else sum += in;
    }
    cout << count << " " << sum;
}