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

    L a,b,d;
    vector<L> c;
    for (int i = 0 ; i < 4 ; i++){
        cin >> b;
        if (i == 0){
            c.push_back(b);
        }else{
            d = 0;
            for (int j = 0 ; j < c.size() ; j++){
                if (b == c[j]){
                    d++;
                }
            }
            if (d == 0){
                c.push_back(b);
            }
        }
    }
    cout << 4-c.size();
    
    return 0;
}