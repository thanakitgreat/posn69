#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num; cin >> num;
    L n1 = 2;
    if(num > 2){
        bool stat = true;
        do{
            if(num%n1 == 0){
                stat = false;
                break;
            }
            n1++;
        }while(n1 < num/2);
        if(stat) cout << "y";
        else cout << "n";
    }
    else if(num == 2) cout << "y";
    else cout << "n";
}