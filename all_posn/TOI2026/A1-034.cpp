#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a ;
    vector<int> b;
    int d;
    int f;
    for (int c = 0; c < a;c++){
        cin >> f;
        b.push_back(f);
    }
    for (int e = 0; e < a;e++){
        if (e == 0){
            d = b[e];
        }else{
            if (b[e] < d){
                d = b[e];
            }
        }
    }
    cout << d;
}