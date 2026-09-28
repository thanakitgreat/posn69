#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    C coded_let,decoded_let;
    S coded_num,decoded_num;
    cin >> coded_let >> coded_num >> decoded_let >> decoded_num;
    if (coded_let == decoded_let){
        if (coded_num == decoded_num){
            cout << 1000000;
        }else if (coded_num.substr(2,3) == decoded_num.substr(2,3)){
            cout << 2000;
        }else if (coded_num.substr(3,2) == decoded_num.substr(3,2)){
            cout << 1000;
        }else{
            cout << 20;
        }
    }else{
        if (coded_num == decoded_num){
            cout << 100000;
        }else if (coded_num.substr(2,3) == decoded_num.substr(2,3)){
            cout << 200;
        }else if (coded_num.substr(3,2) == decoded_num.substr(3,2)){
            cout << 100;
        }else{
            cout << 0;
        }
    }
    return 0;
}