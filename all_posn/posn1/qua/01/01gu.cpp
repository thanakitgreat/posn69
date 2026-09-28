#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int a,b,e;
    cin >> a >> b;
    vector<int> c;
    vector<int> d;

    for (int i = 0 ; i < a ; i++){
        cin >> e;
        c.push_back(e);
    }
    for (int i = 0 ; i < b ; i++){
        cin >> e;
        d.push_back(e);
    }
        for (int i = 0 ; i < a ; i++){
            auto it = find(d.begin(), d.end(), c[i]);
            if (it != d.end()) {
                d.erase(it);
            }else{
                d.push_back(c[i]);
            }
        }
    cout << d.size();
    return 0;
}