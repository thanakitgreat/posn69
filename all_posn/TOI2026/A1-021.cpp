#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;
    if (a < 1582){
        cout << "yes";
    }else{
        if (a%4 == 0){
            if (a%100 == 0){
                if (a%400 == 0){
                    cout << "yes";
                }else{
                    cout << "no";
                }
            }else{
                cout << "yes";
            }
        }else{
            cout << "yes";
        }
    }
}