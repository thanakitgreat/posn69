#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char a;
    cin >> a;
    if (a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u'){
        cout << "yes";
    }else{
        cout << "no";
    }
}