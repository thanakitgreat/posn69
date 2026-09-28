#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,c;
    cin >> a;
    vector<int> b;
    vector<int> d(a);

    for (int i = 0 ; i < a ; i++){
        cin >> c;
        b.push_back(c);
    }

    for (int i = 0 ; i < a ; i++){
        if (i == 0 || i == a-1){
            d[i] = b[i];
        }else{
            d[i] = b[i-1] + b[i] + b[i+1];
        }
    }
    for (int i = 0 ; i < a ; i++){;
        cout << d[i] << " ";
    }
}