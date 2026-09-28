#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long L;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    vector<L> d;

    cin >> a;
    if ( a < 1 || a > 10000){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        for (int j = 0 ; j < b ; j++){
            cin >> c;
            d.push_back(c);
        }
        sort(d.begin(),d.end());
        L e = 1;
        for (int k = 0 ; k < b ; k++){
            if (k == 0){
                e *= (d[k] + 1);
            }else{
                e *= d[k];
            }
        }
        d.clear();
        cout << e << endl;
    }
}