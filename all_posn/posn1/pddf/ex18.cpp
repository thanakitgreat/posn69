#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef string S;

void checkprime(L a){
    B stat = true;
    if(a == 1){
        stat = false;
    }else{
        L i = 2;
        do{
            if(a % i == 0){
                stat = false;
                break;
            }
            i++;
        }while(i < a/2);
    }
    if(stat){
        cout << 'y';
    }else{
        cout << 'n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    cin >> num;
    checkprime(num);
    
}
