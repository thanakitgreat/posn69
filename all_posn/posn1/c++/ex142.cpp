#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,d,e;
    string b;
    vector<int> c;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        if (b == "ENQUEUE"){
            cin >> d; 
            c.push_back(d);
        }else if(b == "DEQUEUE"){
            cin >> d;
            c.erase(c.begin());
        }else if(b == "PROMOTE"){
            cin >> d;
            auto it = find(c.begin(), c.end(), d);
            if (it != c.end()) c.erase(it);
            c.insert(c.begin(), d);
        }else if(b == "DEMOTE"){
            cin >> d;
            auto it = find(c.begin(), c.end(), d);
            if (it != c.end()) c.erase(it);
            c.push_back(d);
        }else if(b == "SHOW"){
            for (int j = 0 ; j < c.size() ; j++){
                cout << c[j] << " ";
            }
        }
    }
}