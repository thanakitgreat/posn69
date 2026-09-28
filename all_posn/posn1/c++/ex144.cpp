#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    vector<double> c;
    vector<double> d;
    cin >> a;
    cout << fixed << setprecision(3);
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        c.push_back(b*b*M_PI);
        d.push_back(2*b*M_PI);
    }
    for (int i = 0 ; i < a ; i++){
        cout << "Area of circle " << i+1 << ": " << c[i] << endl;
        cout << "Perimeter of circle " << i+1 << ": " << d[i] << endl;
    }
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());

    cout << "The maximum area is: " << c[a-1] << endl;
    cout << "The maximum perimeter is: " << d[a-1] << endl;
}