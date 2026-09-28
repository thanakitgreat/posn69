#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

typedef long long L;

L X(L a,L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,f = -1,e = -1;
    vector<L> c;
    cin >> a;
    if (a < 2 || a > X(10,2)){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        c.push_back(b);
    }
    vector<L> d = c;    
    sort(d.begin(),d.end());
    for (int i = a-1 ; i > 0 ; i--){
        if (c[i] == d[0]){
            f = i;
            break;
        }
    }
    for (int i = 0 ; i < a ; i++){
        if (c[i] == d[a-1]){
            e = i;
            break;
        }
    }
    if (f > e){
        cout << a-f-1 + e;
    }else{
        cout << a-f-1 + e - 1;
    }
    return 0;
}