#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;
typedef stringstream SS;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L sum = 0,count = 0;
    L num;
    do{
        cin >> num;
        if(num != -1){
            sum += num;
            count++;
        }else{
            break;
        }
        
    }while(true);
    cout << sum/count;
    
}