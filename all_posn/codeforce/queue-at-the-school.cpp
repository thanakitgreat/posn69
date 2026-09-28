#include <iostream>
#include <string>
#include <vector>
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

    L a,b;
    string c;
    vector<char> d;
    cin >> a >> b >> c;
    if (a < 1 || a > (X(10,2))/2 || b < 1 || b > (X(10,2))/2){
        return 0;
    }
    for (char e : c){
        d.push_back(e);
    }
    for (int j = 0 ; j < b ; j++){
        for (int i = 0 ; i < a ; i++){
            if (d[i] == 'B' && d[i+1] == 'G'){
                swap(d[i],d[i+1]);
                i++;
            }
        }
    }
    for (int i = 0 ; i < a ; i++){
        cout << d[i];
    }
}