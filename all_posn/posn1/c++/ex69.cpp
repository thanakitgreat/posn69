#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b = 0,c = 0;
    getline(cin,a);
    for (int d = 0 ; d < a.length() ; d++){
        if (isupper(a[d])){
            b++;
        }else if(isdigit(a[d])){
            c++;
        }
    }
    cout << b << endl;
    cout << c;
    
    return 0;
}