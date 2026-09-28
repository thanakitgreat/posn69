#include <iostream>
#include <string>
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

    L a,b,d,f;
    vector<L> c;
    cin >> a;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    cin >> b;
    for (int i = 0 ; i < b ; i++){
        cin >> d;
        if (i != 0){
            int e = 0;
            for (int j = 0 ; j < c.size() ; j++){
                if (c[j] == d) e++;
            }
            if (e == 0) c.push_back(d);
        }else{
            c.push_back(d);
        }
    }
    cin >> f;
    for (int i = 0 ; i < f ; i++){
        cin >> d;
            int e = 0;
            for (int j = 0 ; j < c.size() ; j++){
                if (c[j] == d) e++;
            }
            if (e == 0) c.push_back(d);
    }
    if (c.size() == a){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}