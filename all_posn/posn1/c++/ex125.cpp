#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    int c = 0;
    vector<int> v;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        auto it = find(v.begin(), v.end(), b);
        if (it != v.end()){
            continue;
        }else{
            v.push_back(b);
        }
    }
    for (int i = 0 ; i < v.size() ; i++){
        c += v[i];
    }
    cout << c;
}