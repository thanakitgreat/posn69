#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long L;

void Y(L b){
    L c,f = 0;
    vector<L> d;
    vector<L> e;
    for(L i = 0 ; i < b ; i++){
        cin >> c; d.push_back(c);
    }
    sort(d.begin(),d.end());
    for(L i = 0 ; i < b ; i++){
        if(d[i] == 1 && i != b-1){
            f++;
        }else if(d[i] != 1 && i != b-1){
            f += (2*d[i]-1);
        }else if(d[i] == 1 && i == b-1){
            f++;
        }
    }
    cout << f << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,b,c;
    cin >> a;
    if (a < 1 || a > 10000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> b >> c;
        Y(c);
    }
    return 0;
}