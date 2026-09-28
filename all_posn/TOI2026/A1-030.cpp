#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c = 0,d;
    vector<int> e;
    cin >> a;

    for (int i = 0 ; i < a ; i++){
        cin >> b >> d;
        if (b >= d){
            e.push_back(b);
        }else{
            e.push_back(d);
        }
    }
    
    if (e.size() != 1){
        for (int i = 0 ; i < e.size() ; i++){
            c += e[i];
            if (i != e.size()-1){
                cout << e[i] << " + ";
            }else{
                cout << e[i] << " = ";
            }
        }
        cout << c;
    }else{
        cout << e[0];
    }
}