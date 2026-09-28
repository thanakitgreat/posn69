#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,c;
    cin >> a;
    cout << a << endl;
    vector<int> d;

    int b = 0;
    for (int i = 0; i < a; ++i) {
        cin >> c;
        cout << c << " ";
        auto it = find(d.begin(), d.end(), c);
        if (it != d.end()){
            d.erase(it);
        }else{
            d.push_back(c);
        }
    }
    cout << endl;
    cout << "The Solitary Number is " << d[0] << endl;

    return 0;
}