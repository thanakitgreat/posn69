#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,c,d = 0;
    cin >> a;
    vector<int> b = {-1};
    for (int i = 0 ; i < a ; i++){
        cin >> c;
        b.push_back(c);
    }
    b.push_back(-1);
    for (int i = 1 ; i < b.size()-1 ; i++){
        if (b[i-1] < b[i] and b[i] > b[i+1]){
            d++;
        }
    }
    cout << d;
}