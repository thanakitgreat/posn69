#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

bool prime_check(L a){
    int d = 0;
    if ( a == 1 ){
        return false;
    }else{
    for (int c = 2; c*c <= a;c++){
        if ( a%c == 0){
            d++;
        }
    }
    if (d>0){
        return false;
    }else{
        return true;
    }}
}
    


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num;
    cin >> num;

    if(num < 0 or num > 32768){
        return 0;
    }

    if(prime_check(num)){
        cout << "Yes \n";
        for(L i = 1 ; i <= num ; i++){
            if (prime_check(i)){
                if(i == num){
                    cout << i;
                }else{
                    cout << i << " ";
                }
            }
            }}else{
                cout << "No \n";
            }
        return 0;

}