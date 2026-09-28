#include <iostream>
#include <vector>
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

    L a,b,c = 1;
    vector<L> d;
    cin >> a;
    if (a < 1 || a > X(10,5)){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        d.push_back(b);
    }
    for (int i = 0 ; i < a-1 ; i++){
        if (d[i] != d[i+1]){
            c++;
        }
    }
    cout << c;
    
    return 0;
}