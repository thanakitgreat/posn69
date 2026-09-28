#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,eve = 0,odd = 0; cin >> num;
    do{
        if(num%2) odd++;
        else eve++;
        num--;
    }while(num > 0);
    cout << "e: " << eve << ",o: " << odd;
}
