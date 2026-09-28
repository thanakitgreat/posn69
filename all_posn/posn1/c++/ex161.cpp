#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,c,d;
    int e = 0;
    cin >> a >> d;
    vector<int> b;

    for (int i = 0 ; i < a ; i++){
        cin >> c;
        b.push_back(c);
    }
    for (int i = 0 ; i < a ; i++){
        for (int j = i+1 ; j < a ; j++){
            if (abs(b[i]-b[j]) <= d){
                e++;
            }
        }
    }
    cout << e;
}