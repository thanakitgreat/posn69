#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,d,f;
    int e = -1;
    cin >> a >> b;
    vector<int> c;

    for (int  i = 0 ; i < a ; i++){
        cin >> d;
        c.push_back(d); 
    }

    for (int i = 0 ; i < a ; i++){
        for (int j = i+1 ; j < a ; j++){
            f = c[i] + c[j];
            if (f > e && f <= b){
                e = f;
            }
        }
    }
    cout << e;
}