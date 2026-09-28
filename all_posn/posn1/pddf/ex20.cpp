#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,odd = 0,even = 0;
    cin >> num;
    do{
        if(num % 2 == 0){
            even++;
        }else{
            odd++;
        }
        num--;
    }while(num > 0);
    cout << "e: " << even << ",o: " << odd;
}