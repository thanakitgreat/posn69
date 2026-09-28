#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    vector<int> d;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        if (b == 1){
            cin >> c;
            d.push_back(c);
        }else if(b == 2){
            cin >> c;
            auto it = find(d.begin(), d.end(), c);
            if (it != d.end()) d.erase(it);
        }else if(b == 3){
            sort(d.begin(),d.end(),greater<>());
            for (int j = 0 ; j < d.size() ; j++){
                cout << "Rank " << j+1 << ": " << d[j] << endl;
            }
        }
    }
}