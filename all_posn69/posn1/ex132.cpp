#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,count = 1; cin >> num;
    cout << "N : " << num << "\n";
    while(num != 1){
        cout << num << "\n";
        if(num%2) num = num*3+1;
        else num /= 2;
        count++;
    }
    cout << 1 << "\n" << "Length : " << count;;
}