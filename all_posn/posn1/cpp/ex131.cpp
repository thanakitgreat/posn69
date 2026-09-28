#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,d;
    vector<int> c;
    cin >> a;
    cout << a << endl;
    for (int i = 0 ; i < a ; i++){
        cin >> d;
        cout << d << " ";
        auto it = find(c.begin(), c.end(), d);
        if (it != c.end()){
            c.erase(it);
        }else{
            c.push_back(d);
        }
    }
    cout << "The Solitary Number is " << c[0];
}